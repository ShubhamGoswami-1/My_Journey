#include<bits/stdc++.h>
using namespace std;
int Solve(vector<int>v,int s){
    int low=0,high=v.size()-1,mid;
    while(low<=high){
        mid=(low+high)/2;
        if(v[mid]==s){
            return mid;
        }
        else if(v[mid]<s){
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
    int n,i,s;
    cin>>n;
    vector<int>v(n);
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    cin>>s;
    sort(v.begin(),v.end());
    cout<<Solve(v,s);
    return 0;
}