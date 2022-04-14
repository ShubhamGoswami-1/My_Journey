#include<bits/stdc++.h>
using namespace std;
int Solve(vector<int>v,vector<int>a){
    vector<int>temp(v.size());
    for(int i=0;i<v.size();i++){
        temp[i]=v[i]-a[i];
    }
    unordered_map<int,int>m;
    int pre_sum=0,sum=0,res=0;
    for(int i=0;i<temp.size();i++){
        pre_sum+=temp[i];
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
    vector<int>v(n),a(n);
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<Solve(v,a);
    return 0;
}
/*
6
0 1 0 0 0 0 
1 0 1 0 0 1
4

7
0 1 0 1 1 1 1 
1 1 1 1 1 0 1 
6

3
0 0 0 
1 1 1 
0

4
0 0 1 0 
1 1 1 1 
1
*/