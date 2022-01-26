#include<bits/stdc++.h>
using namespace std;
void Solve(stack<int> &s,int k){
    if(s.empty()){
        return;
    }
    else if(s.size()==k){
        s.pop();
        return ;
    }
    int val = s.top();
    s.pop();
    Solve(s,k);
    //cout<<val<<" ";
    s.push(val);
    
}
int main()
{
    int n,i,temp,k;
    cin>>n;
    k=n/2+1;
    stack<int>s;
    for(i=0;i<n;i++){
        cin>>temp;
        s.push(temp);
    }
    Solve(s,k);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }

    return 0;
}