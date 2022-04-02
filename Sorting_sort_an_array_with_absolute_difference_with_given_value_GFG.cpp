#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,k;
    cin>>n;
    vector<int>v(n);
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    cin>>k;
    multimap<int,int>m;
    for(i=0;i<v.size();i++){
        m.insert(make_pair(abs(v[i]-k),v[i]));
    }
    i=0;
    for(auto it = m.begin();it!=m.end();it++){
        v[i]=(*it).second;
        i++;
    }
    for(auto i : v){
        cout<<i<<" ";
    }
    cout<<"\n";
    return 0;
}
/*
5
10 5 3 9 2     
7
*/