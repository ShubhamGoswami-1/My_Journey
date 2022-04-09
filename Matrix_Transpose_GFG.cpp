#include<bits/stdc++.h>
using namespace std;
void Solve(vector<vector<int> >&v){
    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){
            swap(v[i][j],v[j][i]);
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
    for(i=0;i<v.size();i++){
        for(j=0;j<v.size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
/*
4
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
*/