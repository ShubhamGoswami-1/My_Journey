#include<bits/stdc++.h>
using namespace std;
int Max_Subarray_Sum(vector<int>v){
    int res=v[0],max1=v[0];
    for(int i=1;i<v.size();i++){
        res=max(res+v[i],v[i]);
        max1=max(res,max1);
    }
    return max1;
}
int Solve(vector<int>v){
    int max_normal=Max_Subarray_Sum(v);
    if(max_normal<0){
        return max_normal;
    }
    int sum=0;
    for(int i=0;i<v.size();i++){
        sum+=v[i];
        v[i]=v[i]*(-1);
    }
    sum+=Max_Subarray_Sum(v);
    return max(sum,max_normal);
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