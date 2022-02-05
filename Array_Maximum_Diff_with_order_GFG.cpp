#include<bits/stdc++.h>
using namespace std;
int Solve(vector<int>v){
    int min1=v[0],res=min1,i;
    for(i=1;i<v.size();i++){
        if(res<(v[i]-min1)){
            res=max(res,v[i]-res);
            min1=min(min1,v[i]);
        }
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