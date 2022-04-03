/*
https://www.geeksforgeeks.org/find-number-pairs-xy-yx/
*/
#include<bits/stdc++.h>
using namespace std;
int Count(int x,vector<int>y,vector<int>NoofY){
    if(x==0){
        return 0;
    }
    if(x==1){
        return NoofY[0];
    }
    int count1=0;
    auto it=upper_bound(y.begin(),y.end(),x);
    // it is a iterator to thr index of y which is smallest greater 
    //element than x (binary search)
    count1=y.end()-it;
    // If we have reached here, then x must be greater than
    // 1, increase number of pairs for y=0 and y=1
    count1 += (NoofY[0] + NoofY[1]);
    // Decrease number of pairs for x=2 and (y=4 or y=3)
    if (x == 2){
        count1 -= (NoofY[3] + NoofY[4]);
    }
    // Increase number of pairs for x=3 and y=2
    if (x == 3){
        count1 += NoofY[2];
    }
    return count1;
}
int Solve(vector<int>x,vector<int>y,vector<int>NoofY){
    int total_pairs=0;
    for(int i=0;i<x.size();i++){
        total_pairs+=Count(x[i],y,NoofY);
    }
    return total_pairs;
}
int main()
{
    int n,m,i;
    cin>>n;
    vector<int>x(n);
    for(i=0;i<n;i++){
        cin>>x[i];
    }
    cin>>m;
    vector<int>y(m);
    for(i=0;i<m;i++){
        cin>>y[i];
    }
    vector<int>NoofY(5);
    for(i=0;i<y.size();i++){
        if(y[i]<5){
            NoofY[y[i]]++;
        }
    }
    sort(y.begin(),y.end());
    cout<<Solve(x,y,NoofY);
    return 0;
}
/*
3
10 19 18 
3
11 15 9
2
3
2 1 6
2
1 5
*/