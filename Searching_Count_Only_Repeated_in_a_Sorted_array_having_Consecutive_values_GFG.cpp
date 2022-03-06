/*
Time - O(NlogN)
Space - O(1)
*/
#include<bits/stdc++.h>
using namespace std;
pair<int,int> Solve(vector<int>v){
    int low=0,high=v.size()-1,mid,freq=v.size()-(v[v.size()-1]-v[0]);
    while(low<=high){
        mid=(low+high)/2;
        if((mid != v.size()-1 && v[mid]==v[mid]+1) || (mid != 0 && v[mid-1]==v[mid])){
            return {v[mid],freq};
        }
        else if(v[mid]-v[0]==mid){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return{-1,-1};
}
int main()
{
    int n,i;
    cin>>n;
    vector<int>v(n);
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    pair<int,int> p=Solve(v);
    cout<<p.first<<" "<<p.second<<"\n";
    return 0;
}