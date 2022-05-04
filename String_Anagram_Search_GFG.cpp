#include<bits/stdc++.h>
using namespace std;
bool areSame(int CT[],int CP[]){
    for(int j=0;j<256;j++){
        if(CP[j]!=CT[j]){
            return false;
        }
    }
    return true;
}
bool Solve(string &text, string &pattern){
    int CP[256]={0},CT[256]={0};
    for(int i=0;i<pattern.length();i++){
        CT[text[i]]++;
        CP[pattern[i]]++;
    }
    for(int i=pattern.length();i<text.length();i++){
        if(areSame(CT,CP)){
            return true;
        }
        CT[text[i]]++;
        CT[text[i-pattern.length()]]--;
    }
    return false;
}
int main()
{
    string text,pattern;
    cin>>text>>pattern;
    cout<<Solve(text,pattern);
    return 0;
}
/*
geeksforgeeks
frog
1

geeksforgeeks
seekr
0

geeksforgeeks
seekg
1
*/