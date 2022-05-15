#include<bits/stdc++.h>
using namespace std;
string Solve(string str,string patt){      // Time : O(N)
    if(patt.length()>str.length()){
        return "";
    }
    int START=0,start_ind=-1,min1=INT_MAX;
    int hash_str[256],hash_pat[256];
    memset(hash_str,0,sizeof(hash_str));
    memset(hash_pat,0,sizeof(hash_pat));
    for(int i=0;i<patt.length();i++){
        hash_pat[patt[i]]++;
    }
    int count1=0;
    for(int i=0;i<str.length();i++){
        hash_str[str[i]]++;
        if(hash_str[str[i]]<=hash_pat[str[i]]){
            ++count1;
        }
        if(count1==patt.length()){
            while(hash_str[str[START]]>hash_pat[str[START]] || hash_pat[str[START]]==0){
                if(hash_str[str[START]]>hash_pat[str[START]]){
                    hash_str[str[START]]--;
                }
                START++;
            }
            int window_length=i-START+1;
            if(min1>window_length){
                min1=window_length;
                start_ind=START;
            }
        }
    }
    if(start_ind==-1){
        return "";
    }
    return str.substr(start_ind,min1);
}
int main()
{
    string str,pattern;
    getline(cin,str);
    getline(cin,pattern);
    cout<<Solve(str,pattern);
    return 0;
}
/*

timetopractise
toc
toprac

zoomlazapzo
oza
apzo

this is a test string
tist 
t stri

*/