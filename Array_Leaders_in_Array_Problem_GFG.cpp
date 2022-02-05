#include<bits/stdc++.h>
using namespace std;
void Solve(vector<int> v,int n){
    int max1=v[n-1],i;
    cout<<max1<<" ";
    for(i=n-2;i>=0;i--){
        if(v[i]>max1){
            max1=v[i];
            cout<<max1<<" ";
        }
    }
    cout<<"\n";
}
int main()
{
    int n,i;
    cin>>n;
    vector<int>v(n);
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    Solve(v,n);
    return 0;
}