
/*
Time : O(n)     { 'n' is the length of the text }
Space : O(m)    { 'm' is the lenbth of the pattern } (For the LPS)
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> fillLPS(string pattern){
    vector<int>LPS;
    LPS.push_back(0);
    int len=0,i=1;
    while(i<pattern.length()){
        if(pattern[len]==pattern[i]){
            len++;
            LPS.push_back(len);
            i++;
        }
        else{
            if(len==0){
                LPS.push_back(0);
                i++;
            }
            else{
                len=LPS[len-1];
            }
        }
    }
    return LPS;
}
vector<int> KMP(string text,string pattern){
    vector<int>res,LPS;
    LPS=fillLPS(pattern);
    int i=0,j=0;
    while(i<text.length()){
        if(pattern[j]==text[i]){
            i++;j++;
        }
        if(j==pattern.length()){
            res.push_back(i-j);
            j=LPS[j-1];
        }
        else if(i<text.length() && pattern[j]!=text[i]){
            if(j==0){
                i++;
            }
            else{
                j=LPS[j-1];
            }
        }
    }
    return res;
}
int main()
{
    string text,pattern;
    cin>>text>>pattern;
    vector<int>res=KMP(text,pattern);
    if(!res.empty()){
        for(auto i : res){
            cout<<i<<" ";
        }
    }
    else{
        cout<<"Not Found :( \n";
    }
    return 0;
}
/*
ababcababaad
ababa
5 

abcdefg
bcd
1

aaaaab
aaaa
0 1

abcd
ba
Not Found :(

abcdbcdfbsaecdfbcdfxswq
bcdf
4 15 
*/