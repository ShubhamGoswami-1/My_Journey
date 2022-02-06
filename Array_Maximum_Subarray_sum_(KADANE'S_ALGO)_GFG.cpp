#include<bits/stdc++.h>
using namespace std;
void Solve(vector<int>v){
    vector<int>res;
    int i,sum=v[0];
    res.push_back(v[0]);
    for(i=1;i<v.size();i++){
        res.push_back(max(res[i-1]+v[i],v[i]));
    }
    for(auto i : res){
        cout<<i<<" ";
    }
}
int main()
{
    int n,i;
    cin>>n;
    vector<int>v(n);
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    Solve(v);
    return 0;
}