#include<bits/stdc++.h>
using namespace std;
int second_Largest(int n,vector<int>v){
    int l=-1,sl=-1,pos_l=-1,pos_sl=-1,i;
    for(i=0;i<n;i++){
        if(v[i]>l){
            sl=l;
            pos_sl=pos_l;
            pos_l=i;
            l=v[i];
        }
        else if(v[i]!=l || sl==-1){
            sl=v[i];
            pos_sl=i;
        }
    }
    return sl;
}
int main()
{
    int n,i,temp;
    cin>>n;
    vector<int>v;
    for(i=0;i<n;i++){
        cin>>temp;
        v.push_back(temp);
    }
    cout<<second_Largest(n,v);
    return 0;
}