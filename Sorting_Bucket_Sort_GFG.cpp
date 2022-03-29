/*
Here for simplicity the number of buckets are given i.e K
*/
#include<bits/stdc++.h>
using namespace std;
void Solve(vector<int>&v,int k){
    int mx=v[0],i,j,z=0;
    for(i=1;i<v.size();i++){
        if(mx<v[i]){
            mx=v[i];
        }
    }
    vector<int>buckets[k];
    vector<int>res;
    for(i=0;i<v.size();i++){
        int bucket_index=(v[i]*k)/(mx+1);
        buckets[bucket_index].push_back(v[i]);
    }
    for(i=0;i<k;i++){
        sort(buckets[i].begin(),buckets[i].end());
    }
    for(i=0;i<k;i++){
        for(j=0;j<buckets[i].size();j++){
            v[z++]=buckets[i][j];
        }
    }
}
int main()
{
    int n,i,k;
    cin>>n;
    vector<int>v(n);
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    cin>>k;
    Solve(v,k);
    for(auto i : v){
        cout<<i<<" ";
    }
    return 0;
}
/*
7
30 40 10 80 5 12 70
4
*/
