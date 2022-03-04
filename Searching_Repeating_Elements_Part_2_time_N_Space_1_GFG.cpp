#include<bits/stdc++.h>
using namespace std;
int Solve(vector<int>v){
    int slow=v[0]+1,fast=v[0]+1;
    do{
        slow=v[slow]+1;
        fast=v[v[fast]]+1;
    }while(slow!=fast);
    slow=0;
    while(slow!=fast){
        slow=v[slow]+1;
        fast=v[fast]+1;
    }
    return slow-1;
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