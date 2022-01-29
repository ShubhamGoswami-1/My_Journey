#include<bits/stdc++.h>
using namespace std;
void Permute_Case_Chng(string ip,string op){
    if(ip.length()==0){
        cout<<op<<"\n";
        return ;
    }
    string op1=op;
    string op2=op;
    op1.push_back(ip[0]);
    op2.push_back(toupper(ip[0]));
    ip.erase(ip.begin()+0);
    Permute_Case_Chng(ip,op1);
    Permute_Case_Chng(ip,op2);
}
int main()
{
    string ip,op;
    cin>>ip;
    Permute_Case_Chng(ip,op);
    return 0;
}