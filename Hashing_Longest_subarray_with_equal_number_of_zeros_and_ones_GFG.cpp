#include<bits/stdc++.h>
using namespace std;
int Solve(vector<int>v){
    for(int i=0;i<v.size();i++){
        if(v[i]==0){
            v[i]=-1;
        }
    }
    int pre_sum=0,res=0,sum=0;
    unordered_map<int,int>m;
    for(int i=0;i<v.size();i++){
        pre_sum+=v[i];
        if(pre_sum==sum){
            res=i+1;
        }
        if(m.find(pre_sum)==m.end()){
            m.insert({pre_sum,i});
        }
        if(m.find(pre_sum-sum)!=m.end()){
            res=max(res,i-m[pre_sum-sum]);
        }
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
/*
7
1 0 1 1 1 0 0 
6

4
1 1 1 1
0

8
0 0 1 1 1 1 1 0 
4

6
0 0 1 0 1 1 
6
*/