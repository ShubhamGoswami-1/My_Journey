#include<bits/stdc++.h>
using namespace std;
int Solve(string s){
    int count1=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='1'){
            ++count1;
        }
    }
    return ((count1*(count1-1))/2);
}
int main()
{
    string s;
    cin>>s;
    cout<<Solve(s);
    return 0;
}
/*

011010
3

*/