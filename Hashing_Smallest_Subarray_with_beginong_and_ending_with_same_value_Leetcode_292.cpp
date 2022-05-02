#include<bits/stdc++.h>
using namespace std;
int Solve(vector<int>v){
    unordered_map<int,int>m;
    int min1=INT_MAX;
    for(int i=0;i<v.size();i++){
        if(m.find(v[i])!=m.end()){
            min1=min(min1,i-m[v[i]]+1);
            m[v[i]]=i;
        }
        else{
            m.insert(v[i],i);
        }
    }
    return (min1==INT_MAX)?-1:min1;
}
int main()
{
    int n;
    cin>>n;
    
    return 0;
}