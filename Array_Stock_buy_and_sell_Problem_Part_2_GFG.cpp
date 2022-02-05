#include<bits/stdc++.h>
using namespace std;
int Solve(vector<int>v){
    int profit=0;
    for(int i=1;i<v.size();i++){
        if(v[i]>v[i-1]){
            profit+=(v[i]-v[i-1]);
        }
    }
    return profit;
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