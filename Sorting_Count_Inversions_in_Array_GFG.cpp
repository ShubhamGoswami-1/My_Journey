#include<bits/stdc++.h>
using namespace std;
int CountAndMerge(vector<int>&v,int low,int mid,int high){
    vector<int>v1,v2;
    for(int i=low;i<=mid;i++){
        v1.push_back(v[i]);
    }
    for(int i=mid+1;i<=high;i++){
        v2.push_back(v[i]);
    }
    int i=0,j=0,res=0,left=low;
    while(i<v1.size() && j<v2.size()){
        if(v1[i]<=v2[j]){
            v[left]=v1[i];
            i++;left++;
        }
        else{
            v[left]=v2[j];
            j++;left++;
            res=res+(v1.size()-i);
        }
    }
    while(i<v1.size()){
        v[left]=v1[i];
        left++;i++;
    }
    while(j<v2.size()){
        v[left]=v2[j];
        j++;
        left++;
    }
    return res;
}
int Solve(vector<int> &v,int low,int high){
    int res=0;
    if(low<high){
        int mid=low+(high-low)/2;
        res+=Solve(v,low,mid);
        res+=Solve(v,mid+1,high);
        res+=CountAndMerge(v,low,mid,high);
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
    cout<<Solve(v,0,n-1);
    return 0;
}