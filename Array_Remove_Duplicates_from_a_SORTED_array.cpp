#include<bits/stdc++.h>
using namespace std;
int Solve(int a[],int n){
    int i,res=1;
    for(i=i;i<n;i++){
        if(a[i]!=a[res-1]){
           a[res]=a[i];
           res++;
        }
    }
    return res;
}
int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<Solve(a,n);
    return 0;
}