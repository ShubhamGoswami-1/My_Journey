#include<bits/stdc++.h>
using namespace std;
void N_Bit_BInary_more_1s_than_0s(int ones,int zeros,int n,string op){
    if(n==0){
        cout<<op<<"\n";
        return ;
    }
    string op2=op;
    op2.push_back('1');
    N_Bit_BInary_more_1s_than_0s(ones+1,zeros,n-1,op2);
    if(ones>zeros){
        string op1=op;
        op1.push_back('0');
        N_Bit_BInary_more_1s_than_0s(ones,zeros+1,n-1,op1);
    } 
}
int main()
{
    int n,ones=1,zeros=0;
    cin>>n;
    string s="1";
    N_Bit_BInary_more_1s_than_0s(ones,zeros,n-1,s);
    return 0;
}