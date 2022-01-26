#include<bits/stdc++.h>
using namespace std;
void insert(stack<int> &s,int temp){
    if(s.size()==0){
        s.push(temp);
        return ;
    }
    int val = s.top();
    s.pop();
    insert(s,temp);
    s.push(val);
}
void Reverse(stack<int>s){
    if(s.empty()){
        return ;
    }
    if(s.size()==1){
        return;
    }
    int val = s.top();
    s.pop();
    Reverse(s);
    insert(s,val);
}
int main()
{
    int n,i,temp;
    cin>>n;
    stack<int>s;
    for(i=0;i<n;i++){
        cin>>temp;
        s.push(temp);
    }   
    Reverse(s);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}