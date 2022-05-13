#include<bits/stdc++.h>
using namespace std;
string Solve(string &a,string &b){
    string res="";
    unordered_map<char,int>m;
    for(int i=0;i<b.length();i++){
        m[b[i]]=1;
    }
    for(int i=0;i<a.length();i++){
        if(m.find(a[i])==m.end()){
            res+=a[i];
        }
        else{
            m[a[i]]=2;
        }
    }
    for(int i=0;i<b.length();i++){
        if(m[b[i]]==1){
            res+=b[i];
        }
    }
    if(res.empty()){
        return "-1";
    }
    return res;
}
int main()
{
    string a,b;
    cin>>a>>b;
    cout<<Solve(a,b);
    return 0;
}
/*

aacdb
gafd
cbgf

abcs
cxzca
bsxz

*/