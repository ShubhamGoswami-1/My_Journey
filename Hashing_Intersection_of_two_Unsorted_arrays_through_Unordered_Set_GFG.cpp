#include<bits/stdc++.h>
using namespace std;
/*
int Solve(vector<int>v,vector<int>a){
    unordered_set<int>sv(v.begin(),v.end()),sa(a.begin(),a.end());
    int count1=0;
    for(auto it=sv.begin();it!=sv.end();it++){
        if(sa.find(*it)!=sa.end()){
            ++count1;
        }
    }
    return count1;
}
*/
int Solve(vector<int>v,vector<int>a){
    unordered_set<int>sa(a.begin(),a.end());
    int count1=0;
    for(int i=0;i<v.size();i++){
        if(sa.find(v[i])!=sa.end()){
            ++count1;
            sa.erase(v[i]);
        }
    }
    return count1;
}
int main()
{
    int n,m,i,count1=0;
    cin>>n>>m;
    vector<int>v(n),a(m);
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    for(i=0;i<m;i++){
        cin>>a[i];
    }
    cout<<Solve(v,a);
    return 0;
}
/*
5 4 
10 20 10 30 20
20 10 10 40 
2

5 4
10 15 20 5 30
30 5 30 80
2

3 3 
10 10 10 
10 10 10 
1
*/