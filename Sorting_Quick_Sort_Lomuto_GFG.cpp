#include<bits/stdc++.h>
using namespace std;
int Quick_Lomuto(vector<int>&v,int low,int high){
    int pivot=v[high],left=low-1;
    for(int i=low;i<high;i++){
        if(v[i]<pivot){
            left++;
            swap(v[left],v[i]);
        }
    }
    swap(v[high],v[left+1]);
    return left+1;
}
void Quick_Sort(vector<int>&v,int low,int high){
    if(low<high){
        int p=Quick_Lomuto(v,low,high);
        Quick_Sort(v,low,p-1);
        Quick_Sort(v,p+1,high);
    }
}
int main()
{
    int n,i;
    cin>>n;
    vector<int>v(n);
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    Quick_Sort(v,0,n-1);
    for(auto i : v){
        cout<<i<<" ";
    }
    return 0;
}
/*
7
13 14 12 3 6 7 7
*/