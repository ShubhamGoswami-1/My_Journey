#include<bits/stdc++.h>
using namespace std;

/*
**********NAIVE APPROACH via Sorting***********
bool Solve(string &s1,string &s2){     Time : O(nlogn) 
    if(s1.length()!=s2.length()){
        return false;
    }
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    return (s1==s2);
}
***********************************************
*/

bool Solve(string &s1,string &s2){//EFFICIENT APPROACH Time : O(n) ; Space : O(256)
    if(s1.length()!=s2.length()){
        return false;
    }
    int count1[256]={0};// WHY 256? 256  total characters are there in ascii
    for(int i=0;i<s1.length();i++){
        count1[s1[i]]++;
        count1[s2[i]]--;
    }
    for(int i=0;i<256;i++){
        if(count1[i]!=0){
            return false;
        }
    }
    return true;
}
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    cout<<Solve(s1,s2);
    return 0;
}
/*
abbabc
cbbaab
*/