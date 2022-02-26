/*
Time - O(logn)
Space - O(1)
*/
#include<bits/stdc++.h>
using namespace std;
int Solve(vector<int>v,int x){
    int low=0,high=v.size()-1,mid;
    while(low<=high){
        mid=(low+high)/2;
        if(v[mid]==x){
            return mid;
        }
        //check which part is sorted 
        if(v[low]<v[mid]){
            if(v[low]<=x && v[mid]>x){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        else{
            if(v[high]>=x && v[mid]<x){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
    }
    return -1;
}
int main()
{
    int n,i,x;
    cin>>n;
    vector<int>v(n);
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    cin>>x;
    cout<<Solve(v,x);
    return 0;
}