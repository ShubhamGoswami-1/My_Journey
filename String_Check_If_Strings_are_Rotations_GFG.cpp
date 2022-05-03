#include<bits/stdc++.h>
using namespace std;
int Solve(string &s1,string &s2){
    if(s2.length()>s1.length()){
        return false;
    }
    if((s1+s1).find(s2)!=string::npos){
        return (s1+s1).find(s2);
    }
    //find works linear
    //as well as concatenating is linear
    return -1;
}
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    cout<<Solve(s1,s2);
    return 0;
}
/*
ABCD
CDAB
2

ABAB
ABBA
-1
*/