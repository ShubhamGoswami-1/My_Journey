/*
Time : O(n^2)
*/
#include<bits/stdc++.h>
using namespace std;
int Solve(vector<int>v){
    sort(v.begin(),v.end());
    int i,j,k,count1=0;
    for(i=0;i<v.size()-2;i++){
        k=i+2;
        for(j=i+1;j<v.size();j++){
            while(k<v.size() && v[i]+v[j]>v[k]){
                k++;
            }
            if(k>j){
                count1+=(k-j-1);
            }
        }
    }
    return count1;
}
int main()
{
    int n,i;
    cin>>n;
    vector<int>v(n);
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<Solve(v);
    return 0;
}
/*
5
6 4 9 7 8 
7
2 1 3 5 5 2 9
*/