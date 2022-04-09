#include<bits/stdc++.h>
using namespace std;
void Solve(vector<vector<int> >&v){
    int i,j;
    for(i=0;i<v.size();i++){
        for(j=i+1;j<v.size();j++){
            swap(v[i][j],v[j][i]);
        }
    }
    for(i=0;i<v.size();i++){
        int low=0,high=v.size()-1;
        while(low<high){
            swap(v[low][i],v[high][i]);
            low++;high--;
        }
    }
}
int main()
{
    int n,i,j;
    cin>>n;
    vector<vector<int> >v;
    for(i=0;i<n;i++){
        vector<int>v1(n);
        for(j=0;j<n;j++){
            cin>>v1[j];
        }
        v.push_back(v1);
    }
    Solve(v);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}