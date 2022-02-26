#include<bits/stdc++.h>
using namespace std;
int Solve(vector<int>v,int x){
    int low=0,high=v.size()-1,mid=0;
    while(low<=high){
        mid=(low+high)/2;
        if(v[mid]==x){
            if(v[mid-1]==x || mid != 0){
                high=mid-1;
            }
            else{
                return mid;
            }
        }
        else if(v[mid]<x){
            low=mid+1;
        }
        else{
            high=mid-1;
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
    sort(v.begin(),v.end());
    cout<<Solve(v,x);
    return 0;
}