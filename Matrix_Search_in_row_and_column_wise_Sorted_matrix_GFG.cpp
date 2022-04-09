#include<bits/stdc++.h>
using namespace std;
int Solve(vector<vector<int> > v,int x){
    int left=0,right=v.size()-1;
    while(left<v.size() && right>=0){
        if(v[left][right]==x){
            cout<<left<<" "<<right<<"\n";
            return 0;
        }
        else if(v[left][right]>x){
            right--;
        }
        else{
            left++;
        }
    }
    return -1;
}
int main()
{
    int n,i,j,x;
    cin>>n;
    vector<vector<int> >v;
    for(i=0;i<n;i++){
        vector<int>v1(n);
        for(j=0;j<n;j++){
            cin>>v1[j];
        }
        sort(v1.begin(),v1.end());
        v.push_back(v1);
    }
    cin>>x;
    Solve(v,x);
    return 0;
}
/*
4
10 20 30 40 
15 25 35 45 
27 29 37 48
33 39 39 50
39
3 2

4
10 20 30 40
15 25 35 45
27 29 37 48
33 37 39 50
29
2 1
*/