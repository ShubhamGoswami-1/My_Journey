/*
Range of k is from 0 to k-1 
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> Solve(vector<int> v,int k){
    vector<int>count1(k),res(v.size());
    for(int i=0;i<v.size();i++){
        count1[v[i]]++;
    }
    for(int i=1;i<count1.size();i++){
        count1[i]=count1[i-1]+count1[i];
    }
    for(int i=v.size()-1;i>=0;i--){
        res[count1[v[i]]-1]=v[i];
        count1[v[i]]--;
    }
    return res;
}
int main()
{
    int n,i,k;
    cin>>n;
    vector<int>v(n);
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    cin>>k;
    vector<int>res=Solve(v,k);
    for(auto i : res){
        cout<<i<<" ";
    }
    return 0;
}