#include<bits/stdc++.h>
using namespace std;
void Merge(vector<int> &v,int low,int mid,int high){
    int i=0,j=0,left=low;
    vector<int>v1,v2;
    for(i=low;i<=mid;i++){
        v1.push_back(v[i]);
    }
    for(j=mid+1;j<=high;j++){
        v2.push_back(v[j]);
    }
    i=0,j=0;
    while(i<v1.size() && j<v2.size()){
        if(v1[i]<=v2[j]){
            v[left]=v1[i];
            i++;
            left++;
        }
        else{
            v[left]=v2[j];
            j++;
            left++;
        }
    }
    while(i<v1.size()){
        v[left]=v1[i];
        left++;
        i++;
    }
    while(j<v2.size()){
        v[left]=v2[j];
        j++;
        left++;
    }
}
vector<int> MergeSort(vector<int> &v,int low,int high){
    if(high>low){
        int mid=low+(high-low)/2;
        MergeSort(v,low,mid);
        MergeSort(v,mid+1,high);
        Merge(v,low,mid,high);
    }
    return v;
}
int main()
{
    int i,n;
    cin>>n;
    vector<int>v(n);
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int>res=MergeSort(v,0,n-1);
    for(auto i : res){
        cout<<i<<" ";
    }
    cout<<"\n";
    return 0;
}