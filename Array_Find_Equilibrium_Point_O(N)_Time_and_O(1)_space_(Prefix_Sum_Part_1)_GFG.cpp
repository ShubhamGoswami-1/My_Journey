#include<bits/stdc++.h>
using namespace std;
int Solve(vector<int>v){
    int sum=0,i,l_sum=0;
    for(i=0;i<v.size();i++){
        sum+=v[i];
    }
    for(i=0;i<v.size();i++){
        if(l_sum==(sum-v[i])){
            return i;
        }
        l_sum+=v[i];
        sum-=v[i];
    }
    return -1;
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