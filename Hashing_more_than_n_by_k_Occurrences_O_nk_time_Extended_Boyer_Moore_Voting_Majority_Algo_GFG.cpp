#include<bits/stdc++.h>
using namespace std;
vector<int> Solve(vector<int>v,int k){
    unordered_map<int,int>m;
    vector<int>res;
    for(int i=0;i<v.size();i++){
        if(m.find(v[i])!=m.end()){
            m[v[i]]++;
        }
        else if(m.size()<k-1){
            m[v[i]]=1;
        }
        else{
            for(auto &x : m){
                x.second--;
                if(x.second==0){
                    m.erase(x.first);
                }
            }
        }
    }
    for(auto x : m){
        int count1=0;
        for(int j=0;j<v.size();j++){
            if(x.first==v[j]){
                ++count1;
            }
        }
        if(count1>(v.size()/k)){
            res.push_back(x.first);
            //cout<<x.first<<" ";
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
    vector<int>res=Solve(v,k);
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