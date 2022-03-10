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
        if(j>0 && a[j]==a[j-1]){
            j++;
            continue;
        }
        if(v[i]>a[j]){
            res.push_back(a[j]);
            j++;
        }
        else if(v[i]<a[j]){
            res.push_back(v[i]);
            i++;
        }
        else{
            res.push_back(v[i]);
            j++;
            i++;
        }
    }
    while(i<v.size() && i>0){
        if(v[i] != v[i-1]){
            res.push_back(v[i]);
        }
        i++;
    }
    while(j<a.size() && j>0){
        if(a[j] != a[j-1]){
            res.push_back(a[j]);
        }
        j++;
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
    sort(v.begin(),v.end());
    cin>>m;
    vector<int>a(m);
    for(i=0;i<m;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    vector<int> res=Solve(v,a);
    for(auto i : res){
        cout<<i<<" ";
    }
    cout<<"\n";
    return 0;
}
/*
I/P :
6
2 3 3 3 4 4 
2
4 4 
O/P:
2 3 4 
*/