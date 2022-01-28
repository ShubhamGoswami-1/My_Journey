#include<bits/stdc++.h>
using namespace std;
void Unique_Subsets(string s,string ns,set<string> &subsets,int levels){
    if(levels==s.length()){
        subsets.insert(ns);
        return ;
    }
    Unique_Subsets(s,ns,subsets,levels+1);
    Unique_Subsets(s,ns+s[levels],subsets,levels+1);
    return ;

}
int main()
{
    string s,ns;
    int levels=0;
    cin>>s;
    set<string>subsets;
    Unique_Subsets(s,ns,subsets,levels);
    cout<<"Total number of unique subsets = "<<subsets.size()<<"\n";
    for(auto it : subsets){
        cout<<it<<" ";
    }
    return 0;
}