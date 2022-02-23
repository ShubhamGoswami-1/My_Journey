#include<bits/stdc++.h>
using namespace std;
int Solve(vector<int> &v,int s,int low,int high){
    if(low>high){
        return -1;
    }
    int mid=(low+high)/2;
    if(v[mid]==s){
        return mid;
    }
    else if(v[mid]<s){
        return Solve(v,s,mid+1,high);
    }
    else{
        return Solve(v,s,low,mid-1);
    }
}
int main()
{
    int n,s;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    cin>>s;
    cout<<Solve(v,s,0,n-1);
    return 0;
}