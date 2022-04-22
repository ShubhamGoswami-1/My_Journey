#include<bits/stdc++.h>
using namespace std;
int main()
{
    //Program to print the characters in sorted manner with their frequency
    //Note : All the caharacters given in the string are of 
    //       lower case.
    string s = "Geeksforgeeks";
    int count1[26]={0};
    for(int i=0;i<s.length();i++){
        count1[s[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(count1[i]>0){
            cout<<(char)(i+'a')<<" "<<count1[i]<<"\n";
        }
    }
    return 0;
}