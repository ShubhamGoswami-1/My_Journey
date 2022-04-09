#include<bits/stdc++.h>
using namespace std;
void Solve(vector<vector<int> >v){
    int i;
    for(i=0;i<v[0].size();i++){
        cout<<v[0][i]<<" ";
    }
    cout<<"\n";
    for(i=1;i<v.size();i++){
        cout<<v[i][v[i].size()-1]<<" ";
    }
    for(i=v[v.size()-1].size()-2;i>=0;i--){
        cout<<v[v.size()-1][i]<<" ";
    }
    cout<<"\n";
    for(i=v.size()-2;i>0;i--){
        cout<<v[i][0]<<" ";
    }
    cout<<"\n";
}
int main()
{
    int n,m,j,i;
    cin>>n;
    vector<vector<int> >v;
    for(i=0;i<n;i++){
        cin>>m;
        vector<int>temp(m);
        for(j=0;j<m;j++){
            cin>>temp[j];
        }
        v.push_back(temp);
    }
    Solve(v);
    return 0;
}