#include<bits/stdc++.h>
using namespace std;
void Permute_Letter_case_digits(string ip,string op){
    if(ip.length()==0){
        cout<<op<<"\n";
        return ;
    }
    
    if(isdigit(ip[0])){
        string op1 = op;
        op1.push_back(ip[0]);
        ip.erase(ip.begin()+0);
        Permute_Letter_case_digits(ip,op1);
    }
    else{
        string op1=op;
        string op2=op;
        if(isupper(ip[0])){
            op2.push_back(tolower(ip[0]));
            op1.push_back(ip[0]);
        }
        else{
            op1.push_back(toupper(ip[0]));
            op2.push_back(ip[0]);
        }
        ip.erase(ip.begin()+0);
        Permute_Letter_case_digits(ip,op1);
        Permute_Letter_case_digits(ip,op2);
    }
    
}
int main()
{
    string ip,op;
    cin>>ip;
    Permute_Letter_case_digits(ip,op);
    return 0;
}