#include<bits/stdc++.h>
using namespace std;
int Solve(vector<int>v,int m){
    if(m>v.size()){
        return -1;
    }
    sort(v.begin(),v.end());
    int res=v[m-1]-v[0],i;
    for(i=1;i<=v.size()-m+1;i++){
        res=min(res,abs(v[i]-v[i+m-1]));
    }
    return res;
}
int main()
{
    int n,i,m;
    cin>>n;
    vector<int>v(n);
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    cin>>m;
    cout<<Solve(v,m);
    return 0;
}