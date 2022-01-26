/*
https://www.youtube.com/watch?v=oCcUNRMl7dA&list=PL_z_8CaSLPWeT1ffjiImo0sYTcnLzo-wY&index=8
*/
#include<bits/stdc++.h>
using namespace std;
void solve(stack<int> &s,int k){
    if(s.empty()){
        return;
    }
    if(k==1){
        s.pop();
        return ;
    }
    int val = s.top();
    s.pop();
    solve(s,k-1);
    s.push(val);
}
int main()
{
    int n,i,temp,k;
    cin>>n;
    k=(n/2)+1;
    stack<int>s;
    for(i=0;i<n;i++){
        cin>>temp;
        s.push(temp);
    }
    solve(s,k);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}