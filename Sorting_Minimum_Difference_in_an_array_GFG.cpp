#include<bits/stdc++.h>
using namespace std;
int Solve(vector<int>v){
    if(v.size()<2){
        return INT_MAX;
    }
    sort(v.begin(),v.end());
    int res=INT_MAX;
    for(int i=1;i<v.size();i++){
        res=min(res,v[i]-v[i-1]);
    }
    return res;
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