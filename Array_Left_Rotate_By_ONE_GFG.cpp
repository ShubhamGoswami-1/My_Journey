#include<bits/stdc++.h>
using namespace std;
void Solve(vector<int> &a, int n){
    int temp=a[0],i;
    for(i=1;i<n;i++){
        a[i-1]=a[i];
    }
    a[i-1]=temp;
}
int main()
{
    int n,i;
    cin>>n;
    vector<int>a(n);
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    Solve(a,n);
    for(auto i : a){
        cout<<i<<" ";
    }
    return 0;
}