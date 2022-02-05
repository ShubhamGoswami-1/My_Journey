#include<bits/stdc++.h>
using namespace std;
int Solve(vector<int>v){
    int res=0;
    for(int j=1;j<v.size()-1;j++){
        int lmax=v[j];
        for(int i=0;i<j;i++){
            if(v[i]>lmax){
                lmax=v[i];
            }
        }
        int rmax=v[j];
        for(int i=j+1;i<v.size();i++){
            if(v[i]>rmax){
                rmax=v[i];
            }
        }
        res+=(min(rmax,lmax)-v[j]);
    }
    return res;
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