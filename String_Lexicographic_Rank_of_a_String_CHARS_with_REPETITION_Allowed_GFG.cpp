/*
Time : O(n)
Space : O(256+n)
The solution is for the rank of a string conatains 
non-distinct characters .
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
    int mul=fact(s.length()),res=1,prod=1;
    int duplicatesHandling[s.length()]={0};
    for(int i=s.length()-1;i>=0;i--){
        count[s[i]]++;
        prod*=fact(count[s[i]]);
        duplicatesHandling[i]=prod;
    }
    for(int i=1;i<256;i++){
        count[i]+=count[i-1];
    }
    for(int i=0;i<s.length();i++){
        mul=mul/(s.length()-i);
        res=res+(mul*count[s[i]-1])/duplicatesHandling[i];
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
GOOGLE
88

secret
255
*/