#include<bits/stdc++.h>
using namespace std;
#define d 256
const int q = 101;
void Rabin_Karp(string text,string pattern,int n,int m){
    // Computing d^(m-1)%q
    int h=1;
    for(int i=1;i<=m-1;i++){
        h=(h*d)%q;
    } 
    // computing p (hash value of the pattern array )
    // computing t0 (hash value of the substring of size pattern in text string )
    int p=0,t=0;
    for(int i=0;i<m;i++){
        p=(p*d+pattern[i])%q;
        t=(t*d+text[i])%q;
    }
    cout<<" hash value of the string pattern 'p' "<<p<<"\n";
    for(int i=0;i<n-m+1;i++){
        cout<<"the hash value of text of size p 't' "<<t<<"\n";
        if(p==t){
            int j;
            bool flag = true;
            for(j=0;j<m;j++){
                if(pattern[j]!=text[j+i]){
                    flag = false;
                    break;
                }
            }
            if(flag){
                cout<<"FOUND = "<<i<<"\n";
            }
        }
        if(i<n-m){
            t=((d*(t-text[i]*h))+text[i+m])%q;
            //((d*(t-txt[i]*h))+txt[i+M])%q;
            if(t<0){
               t=t+q;
            }
        }
        
    }
}
int main()
{
    string text,pattern;
    getline(cin,text);
    cin>>pattern;
    Rabin_Karp(text,pattern,text.length(),pattern.length());
    return 0;
}