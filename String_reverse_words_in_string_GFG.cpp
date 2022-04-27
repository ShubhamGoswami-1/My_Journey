#include<bits/stdc++.h>
using namespace std;
void Reverse(string &s,int low,int high){
    while(low<=high){
        swap(s[low],s[high]);
        low++;
        high--;
    }
}
void Solve(string &s){
    int start=0;
    for(int lst=0;lst<s.length();lst++){
        if(s[lst]==' '){
            Reverse(s,start,lst-1);
            start=lst+1;
        }
    }
    Reverse(s,start,s.length()-1);
    Reverse(s,0,s.length()-1);
}
int main()
{
    string s;
    getline(cin,s);
    Solve(s);
    cout<<s;
    return 0;
}