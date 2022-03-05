#include<bits/stdc++.h>
using namespace std;
int Sum(vector<int>v,int low,int high){
    int sum=0;
    for(int i=low;i<=high;i++){
        sum+=v[i];
    }
    return sum;
}
int Solve(vector<int>v,int k,int low,int high){
    if(k==1){
        return Sum(v,low,high);
    }
    if(high==0){
        return v[0];
    }
    int res=INT_MAX;
    for(int i=low;i<=high;i++){
        res=min(res,max(Sum(v,low,i),Solve(v,k-1,i+1,high)));
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
    cout<<Solve(v,k,0,n-1);
    return 0;
}