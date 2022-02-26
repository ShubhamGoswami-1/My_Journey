#include<bits/stdc++.h>
using namespace std;
int Solve(int n){
    int low=0,high=n,mid,ans;
    while(low<=high){
        mid=(low+high)/2;
        int msq=mid*mid;
        if(msq==n){
            return mid;
        }
        else if(msq<n){
            low=mid+1;
            ans=mid;
        }
        else{
            high=mid-1;
        }
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    cout<<Solve(n);
    return 0;
}