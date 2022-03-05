#include<bits/stdc++.h>
using namespace std;
int Solve(vector<int>v){
    int low=0,high=v.size()-1,mid;
    while(low<=high){
        mid=(low+high)/2;
        if(v[mid]==1){
            if(mid != v.size()-1 && v[mid+1]==0){
                return mid+1;
            }
            else{
                low=mid+1;
            }
        }
        else{
            if(mid != 0){
                high=mid-1;
            }
            else{
                return 0;
            }
        }
    }
    return mid;
}
int main()
{
    int n,i;
    cin>>n;
    vector<int>v(n);
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end(),greater<int>());
    cout<<Solve(v);
    return 0;
}