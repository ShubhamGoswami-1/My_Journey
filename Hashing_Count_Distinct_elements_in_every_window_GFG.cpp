#include<bits/stdc++.h>
using namespace std;
vector<int> Solve(vector<int>v,int k){
    unordered_map<int,int>m;
    vector<int>res;
    int i;
    for(i=0;i<k;i++){
        m[v[i]]++;
    }
    res.push_back(m.size());
    for(i=k;i<v.size();i++){
        m[v[i-k]]--;
        if(m[v[i-k]]==0){
            m.erase(v[i-k]);
        }
        m[v[i]]++;
        res.push_back(m.size());
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
    vector<int>res=Solve(v,k);
    for(auto i : res){
        cout<<i<<" ";
    }
    return 0;
}
/*
6
10 20 10 10 30 40 
4
2 3 3 

7
10 20 20 10 30 40 10
4
2 3 4 3 

4 
10 10 10 10 
3
1 1 

4
10 20 30 40 
3
3 3 

6
10 10 5 3 20 5
4
3 4 3
*/