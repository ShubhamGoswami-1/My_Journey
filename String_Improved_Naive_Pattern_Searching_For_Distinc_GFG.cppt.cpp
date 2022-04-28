#include<bits/stdc++.h>
using namespace std;
void Solve(string &s,string &patt){
    int n=s.length(),m=patt.length();
    for(int i=0;i<n-m+1; ){
        int j;
        for(j=0;j<m;j++){
            if(s[i+j]!=patt[j]){
                break;
            }
        }
        if(j==m){
            cout<<i<<" ";
        }
        if(j==0){
            i++;
        }
        else{
            i+=j;
        }
    }
}
int main()
{
    string s,patt;
    cin>>s>>patt;
    Solve(s,patt);
    return 0;
}