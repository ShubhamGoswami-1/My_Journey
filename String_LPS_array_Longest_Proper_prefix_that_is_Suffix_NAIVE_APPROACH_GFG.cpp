/*
Time : O(n^3)
*/
#include<bits/stdc++.h>
using namespace std;
int fillLPS(string &pattern,int sz){
    for(int i=sz-1;i>0;i--){
        bool flag=true;
        for(int j=0;j<i;j++){
            if(pattern[j]!=pattern[sz-i+j]){
                flag=false;
            }
        }
        if(flag){
            return i;
        }
    }
    return 0;
}
vector<int> Solve(string &pattern){
    vector<int>LPS;
    for(int i=0;i<pattern.length();i++){
        LPS.push_back(fillLPS(pattern,i+1));
    }
    return LPS;
}
int main()
{
    string pattern;
    cin>>pattern;
    vector<int>LPS=Solve(pattern);
    for(auto i : LPS){
        cout<<i<<" ";
    }
    return 0;
}