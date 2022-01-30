#include<bits/stdc++.h>
using namespace std;
void Balanced_Paranthesis(int open, int close,string op){
    if(open==0 && close==0){
        cout<<op<<"\n";
        return ;
    }
    if(open>0){
        string op1=op;
        op1=op1+"(";
        Balanced_Paranthesis(open-1,close,op1);
    }
    if(open<close){
        string op2=op;
        op2=op2+")";
        Balanced_Paranthesis(open,close-1,op2);                
    }
}
int main()
{
    int n,open,close;
    string s;
    cin>>n;
    open=n;
    close=n;
    Balanced_Paranthesis(open,close,s);
    return 0;
}