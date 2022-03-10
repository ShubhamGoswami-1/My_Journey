#include<bits/stdc++.h>
using namespace std;
vector<int> Solve(vector<int>v,vector<int>a){
    int i=0,j=0;
    vector<int>res;
    while(i<v.size() && j<a.size()){
        if(i>0 && v[i]==v[i-1]){
            i++;
            continue;
        }
        if(v[i]==a[j]){
            res.push_back(v[i]);
            i++;j++;
        }
        else if(v[i]<a[j]){
            i++;
        }
        else{
            j++;
        }
    }
    return res;
}
int main()
{
    int n,m,i;
    cin>>n;
    vector<int>v(n);
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    cin>>m;
    vector<int>a(m);
    for(i=0;i<m;i++){
        cin>>a[i];
    }
    vector<int> res=Solve(v,a);
    for(auto i : res){
        cout<<i<<" ";
    }
    return 0;
}