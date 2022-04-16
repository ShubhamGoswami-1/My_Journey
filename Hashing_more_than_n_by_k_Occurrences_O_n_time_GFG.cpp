// Time - O(n)
#include<bits/stdc++.h>
using namespace std;
vector<int> Solve(vector<int>v,int k){
    unordered_map<int,int>m;
    for(int i=0;i<v.size();i++){
        m[v[i]]++;
    }
    vector<int>res;
    for(auto i : m){
        if(i.second>v.size()/k){
            res.push_back(i.first);
        }
    }
    return res;
}
int main()
{
    int n,k,i;
    cin>>n;
    vector<int>v(n);
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    cin>>k;
    vector<int> res=Solve(v,k);
    for(auto i : res){
        cout<<i<<" ";
    }
    return 0;
}
/*
9
30 10 20 30 30 40 30 40 30 
2
30 

7
10 10 20 30 20 10 10 
2
10 

8
30 10 20 20 10 20 30 30 
4
20 30 


*/