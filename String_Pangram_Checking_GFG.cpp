#include<bits/stdc++.h>
using namespace std;
bool Solve(string &str){
    bool map[26];
    memset(map,false,sizeof(map));
    for(char ch : str){
        if(ch -'a' >= 0 && ch - 'a' <26){
            map[ch-'a']=true;
        }
        else if(ch-'A' >= 0 && ch-'A' < 26){
            map[ch-'A']=true;
        }
    }
    for(auto i : map){
        if(!(i)){
            return false;
        }
    }
    return true;
}
int main()
{
    string s;
    getline(cin,s);
    cout<<Solve(s);
    return 0;
}
/*

Bawds jog, flick quartz, vex nymph
1

a quick brown fox jumps over , the lazy dog . 
1

*/