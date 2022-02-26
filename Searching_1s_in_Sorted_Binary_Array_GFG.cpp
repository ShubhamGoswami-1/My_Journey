#include<bits/stdc++.h>
using namespace std;
int Solve(vector<int>v){
    int low=0,high=v.size()-1,mid;
    while(low<=high){
        mid=(low+high)/2;
        if(v[mid]==0){
            low=mid+1;
        }
        else{
            if(mid == 0 || v[mid-1] == 0){
                return v.size()-mid;
            }
            else{
                high=mid-1;
            }
        }
    }
    return 0;
}
int main()
{
    int n,i;
    cin>>n;
    vector<int>v(n);
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<Solve(v);
    return 0;
}