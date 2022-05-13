#include<bits/stdc++.h>
using namespace std;
int Solve(string &s){
    int map[256];
    memset(map,-1,sizeof(map));
    int res=INT_MAX;
    for(int i=-0;i<s.length();i++){
        if(map[s[i]]==-1){
            map[s[i]]=i;
        }
        else{
            map[s[i]]=-2;
        }
    }
    for(int i=0;i<256;i++){
        if(map[i]>=0){
            res=min(res,map[i]);
        }
    }
    if(res==INT_MAX){
        return -1;
    }
    return res;
}
int main()
{
    string s;
    cin>>s;
    cout<<s[Solve(s)];
    return 0;
}