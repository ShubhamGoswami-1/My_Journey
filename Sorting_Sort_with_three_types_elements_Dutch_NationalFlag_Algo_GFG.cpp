#include<bits/stdc++.h>
using namespace std;
void Solve(vector<int>&v){
    int low=0,mid=0,high=v.size()-1;
    while(mid<=high){
        if(v[mid]==0){
            swap(v[low],v[mid]);
            mid++;
            low++;
        }
        else if(v[mid]==1){
            mid++;
        }
        else{
            swap(v[mid],v[high]);
            high--;
        }
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
    Solve(v);
    for(auto i : v){
        cout<<i<<" ";
    }
    return 0;
}