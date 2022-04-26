#include<bits/stdc++.h>
using namespace std;

int Solve(string s){ // EFFICIENT Approach - 1
    int count[256];
    fill(count,count+256,-1);
    int res=INT_MAX;
    for(int i=0;i<s.length();i++){
        if(count[s[i]]==-1){
            count[s[i]]=i;
        }
        else{
            res=min(res,count[s[i]]);
        }
    }
    return res;
}

int Solve(string s){ // EFFICIENT Approach - 2
    bool visited[256]={false};
    int res=INT_MAX;
    for(int i=s.length()-1;i>=0;i--){
        if(visited[s[i]]){
            res=i;
        }
        else{
            visited[s[i]]=true;
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

geeksforgeeks
0

dfaagtf
1

*/