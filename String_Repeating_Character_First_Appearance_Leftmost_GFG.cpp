#include<bits/stdc++.h>
using namespace std;
int Solve(string s){
    bool visited[256]={false};
    int res=-1;
    for(int i=s.length()-1;i>=0;i--){
        if(visited[s[i]]==true){
            res=i;
        }
        visited[s[i]]=true;
    }
    return res;
}
int main()
{
    string s;
    cin>>s;
    if(Solve(s)!=-1){
        cout<<s[Solve(s)]<<"\n";
    }
    else{
        cout<<"-1\n";
    }
    return 0;
}
/*

geeksforgeeks
g

Shubham 
h

Mukesh
-1
*/