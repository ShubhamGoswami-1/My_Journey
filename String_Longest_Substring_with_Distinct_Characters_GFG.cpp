#include<bits/stdc++.h>
using namespace std;
int Solve(string &s){ // Time : O(n)
    vector<int>prev(256,-1);
    int res=0,start=0;
    for(int end=0;end<s.length();end++){
        start=max(start,prev[s[end]]+1);
        res=max(res,end-start+1);
        prev[s[end]]=end;
    }
    return res;
}
int Solve(string &s){ // Time : O(n^2)
    int res=0;
    for(int i=0;i<s.length();i++){
        bool visited[256]={false};
        for(int j=i;j<s.length();j++){
            if(visited[s[j]]==true){
                break;
            }
            else{
                res=max(res,j-i+1);
                visited[s[j]]=true;
            }
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

abcadbd
4

abcdabc
4

aaa
1

abaacdbab
4

*/