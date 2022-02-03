#include<bits/stdc++.h>
using namespace std;
int Solve(int a[],int n){
    int count1=0;
    for(int i=0;i<n;i++){
        if(a[i]!=0){
            swap(a[i],a[count1]);
            count1++;
        }
    }
    return count1;
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