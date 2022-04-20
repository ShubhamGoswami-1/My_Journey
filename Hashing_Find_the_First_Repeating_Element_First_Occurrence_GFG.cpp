#include<bits/stdc++.h>
using namespace std;
int Solve(vector<int>v){
    unordered_set<int>s;
    int min1=-1;
    for(int i=v.size()-1;i>=0;i--){
        if(s.find(v[i])!=s.end()){
            min1=i;
        }
        else{
            s.insert(v[i]);
        }
    }
    if(min1==-1){
        return -1;
    }
    return min1;
}
int main()
{
    int n,i;
    cin>>n;
    vector<int>v(n);
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<Solve(v);
    return 0;
}