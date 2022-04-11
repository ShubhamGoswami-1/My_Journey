#include<bits/stdc++.h>
using namespace std;
vector<vector<int> > Solve(vector<vector<int> >v){
    int i,j;
    vector<int>row(v.size()),col(v[0].size());
    vector<vector<int> >res;
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            if(v[i][j]==1){
                col[j]=1;
                row[i]=1;
            }
        }
    }
    for(int i=0;i<row.size();i++){
        vector<int>temp;
        for(int j=0;j<col.size();j++){
            if(row[i]|col[j]==1){
                temp.push_back(1);
            }
            else{
               temp.push_back(0);
            }
        }
        res.push_back(temp);
    }
    return res;
}
int main()
{
    int n,m,i,j;
    cin>>n>>m;
    vector<vector<int> >v;
    for(i=0;i<n;i++){
        vector<int>v1(m);
        for(int j=0;j<m;j++){
            cin>>v1[j];
        }
        v.push_back(v1);
    }
    vector<vector<int> >res=Solve(v);
    for(i=0;i<res.size();i++){
        for(j=0;j<res[i].size();j++){
            cout<<res[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
/*
3 4
1 0 0 1
0 0 1 0
0 0 0 0

1 1 1 1 
1 1 1 1
1 0 1 1
*/