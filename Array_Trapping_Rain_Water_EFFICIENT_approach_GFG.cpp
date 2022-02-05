#include<bits/stdc++.h>
using namespace std;
int Solve(vector<int>v){
    vector<int>l_max,r_max(v.size());
    int res=0;
    l_max.push_back(v[0]);
    for(int i=1;i<v.size();i++){
        l_max.push_back(max(v[i],l_max[i-1]));
    }
    r_max[v.size()-1]=v[v.size()-1];
    for(int i=v.size()-2;i>=0;i--){
        r_max[i]=max(r_max[i+1],v[i]);
    }
    for(int i=1;i<v.size()-1;i++){
        res+=(min(r_max[i],l_max[i])-v[i]);
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