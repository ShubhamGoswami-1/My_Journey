/*
Merge two Sorted array in Theta (m+n) time where m and n are
size of two sorted arrays 
*/
#include<bits/stdc++.h>
using namespace std;
void Merge(vector<int>v,vector<int>a){
    vector<int>res;
    int i=0,j=0;
    while(i<v.size() && j<a.size()){
        if(v[i]<=a[j]){
            res.push_back(v[i]);
            i++;
        }
        else{
            res.push_back(a[j]);
            j++;
        }
    }
    while(i<v.size()){
        res.push_back(v[i]);
        i++;
    }
    while(j<a.size()){
        res.push_back(a[j]);
        j++;
    }
    for(i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    cout<<"\n";
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
    Merge(v,a);
    return 0;
}