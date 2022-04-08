#include<bits/stdc++.h>
using namespace std;
void Solve(vector<vector<int> >v){
    int i,j;
    for(i=0;i<v.size();i++){
        if(i%2==0){
        for(j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<"\n";
        }
        else{
            for(j=v[i].size()-1;j>=0;j--){
                cout<<v[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
}
int main()
{
    int n,m,j,i;
    cin>>n;
    vector<vector<int> >v(n);
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
/*
5
3
1 2 3 
4
1 2 3 4 
5
1 2 3 4 5 
6
1 2 3 4 5 6 
7
1 2 3 4 5 6 7 
*/