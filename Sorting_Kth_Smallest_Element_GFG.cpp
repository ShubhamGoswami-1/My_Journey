/*
It is O(n^2) in worst case but in average case it works in linear time 
average case based on assumption to take a random pivot ,
this can be proved in average its linear time and this algo for average
case called QuickSelect Algorithm .
There also exist better solution which can give linear time in worst case
called as A median Order Statistics algorithm 
But this QuickSelect works better practically becauese its simple 
the median order statistics is a complex algo.
Also this quickSelect algo also modifies the original array , if
don;t want to modify take an extra aux array which will cost an aux space of O(n)
*/
#include<bits/stdc++.h>
using namespace std;
int Lomuto_Partition(vector<int>&v,int low,int high){
    int left=low-1,pivot=v[high];
    while(low<high){
        if(v[low]<pivot){
            left++;
            swap(v[left],v[low]);
        }
        low++;
    }
    swap(v[high],v[left+1]);
    return left+1;
}
int Solve(vector<int>&v,int low,int high,int k){
    while(low<=high){
        int p=Lomuto_Partition(v,low,high);
        if(p==(k-1)){
            return p;
        }
        else if(p<(k-1)){
            low=p+1;
        }
        else{
            high=p-1;
        }
    }
    return -1;
}
int main()
{
    int n,i,k;
    cin>>n;
    vector<int>v(n);
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    cin>>k;
    int p=Solve(v,0,n-1,k);
    cout<<v[p];
    return 0;
}
/*
4
10 5 30 12
2

5
30 20 5 10 8
4
*/