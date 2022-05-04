/*
Time : O(n)
The solution is for the rank of a string conatains all 
distinct characters .
As this solution can be extended to work with non-distinct characters as well .
*/
#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    int f=n;
    while(--n){
        f*=n;
    }
    return f;
}
int Solve(string &s){
    int count[256]={0};
    int mul=fact(s.length()),res=1;
    for(int i=0;i<s.length();i++){
        count[s[i]]++;
    }
    for(int i=1;i<256;i++){
        count[i]+=count[i-1];
    }
    for(int i=0;i<s.length();i++){
        mul=mul/(s.length()-i);
        res=res+mul*count[s[i]-1];
        for(int j=s[i];j<256;j++){
            count[j]--;
        }
    }
    return res;
}
int main()
{
    string s;
    cin>>s;
    cout<<Solve(s);
    return 0;
}
/*
string
598

BAC
3

bac
3

cba
6

dcba
24

ABCD
1
*/