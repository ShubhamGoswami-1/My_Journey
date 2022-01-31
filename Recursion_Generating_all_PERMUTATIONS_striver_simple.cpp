/*
Generating all Permutations with recursion simple striver approach
aux space used O(N) ;- Both for the boolean vector and the new string ;
*/
#include<bits/stdc++.h>
using namespace std;
void Permute(string s, string op, vector<bool> &v){
    if(op.length()==s.length()){
        cout<<op<<"\n";
        return ;
    }
    for(int i=0;i<s.length();i++){
        if(!v[i]){
            op.push_back(s[i]);
            v[i]=true;
            Permute(s,op,v);
            op.erase(op.end()-1);
            v[i]=false;
        }
    }
}
int main()
{
    string s,ns;
    cin>>s;
    vector<bool> v;
    int i;
    for(i=0;i<s.length();i++){
        v.push_back(false);
    }
    Permute(s,ns,v);
    return 0;
}