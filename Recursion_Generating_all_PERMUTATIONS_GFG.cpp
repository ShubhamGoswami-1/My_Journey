#include<bits/stdc++.h>
using namespace std;
void Permute(string s,int i){
    if(i==s.length()-1){
        cout<<"Base excecuted : s = "<<s<<"\n";
        return;
    }
    for(int j=i;j<s.length();j++){
        cout<<"j = "<<j<<" and i = "<<i<<"\n";
        swap(s[j],s[i]);
        cout<<"s = "<<s<<"\n";
        cout<<"Calling for s = "<<s<<" current i = "<<i+1<<"\n";
        Permute(s,i+1);
        cout<<"j = "<<j<<" and i = "<<i<<"\n";
        swap(s[j],s[i]);
        cout<<"s = "<<s<<"\n";
    }
}
int main()
{
    int i=0;
    string s;
    cin>>s;
    cout<<"Calling for s = "<<s<<" current i = "<<i<<"\n";
    Permute(s,i);
    return 0;
}