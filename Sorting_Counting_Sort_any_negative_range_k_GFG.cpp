#include<bits/stdc++.h>
using namespace std;
vector<int> Solve(vector<int> v){
    int min1=INT_MAX,max1=INT_MIN,i;
    for(i=0;i<v.size();i++){
        if(min1>v[i]){
            min1=v[i];
        }
        if(max1<v[i]){
            max1=v[i];
        }
    }
    for(i=0;i<v.size();i++){
        v[i]+=abs(min1);
    }
    vector<int>count1(max1+abs(min1)+1),res(v.size());
    for(i=0;i<v.size();i++){
        count1[v[i]]++;
    }
    for(i=1;i<count1.size();i++){
        count1[i]=count1[i-1]+count1[i];
    }
    for(i=v.size()-1;i>=0;i--){
        res[count1[v[i]]-1]=v[i]+min1;
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
    vector<int> res=Solve(v);
    for(auto i : res){
        cout<<i<<" ";
    }
    return 0;
}
/*
9
8 5 3 -2 0 -5 7 3 6
*/