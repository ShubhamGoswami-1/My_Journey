#include<bits/stdc++.h>
using namespace std;
int Solve(vector<int>v){
     int low=0,high=v.size()-1;
     int mid,n=high+1;
        while(low<=high){
        mid=(low+high)/2;
        if(v[mid]<v[mid-1]){
            if(mid!=0){
            return v[mid];}
            else{
                return 0;
            }
        }
        else if(v[mid]>v[0] && v[mid]<v[n-1]){
            return v[0];
        }
        else if(v[mid]>v[0] && v[mid]>v[n-1]){
              low=mid+1;
        }
        else{
            high=mid-1;
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
    cout<<Solve(v);
    return 0;
}