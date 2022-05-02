/*
Time : O(n)
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> Solve(string &pattern){
    vector<int>LPS;
    LPS.push_back(0);
    int i=1,len=0;
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
