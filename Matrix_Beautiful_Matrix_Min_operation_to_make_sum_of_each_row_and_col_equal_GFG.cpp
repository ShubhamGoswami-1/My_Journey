#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,maxsum=0,count1=0;
    cin>>n;
    vector<vector<int> >v;
    for(i=0;i<n;i++){
        vector<int>v1(n);
        for(j=0;j<n;j++){
            cin>>v1[j];
        }
        v.push_back(v1);
    }
    vector<int>rowsum(n),colsum(n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            rowsum[i]+=v[i][j];
            colsum[j]+=v[i][j];
        }
    }
    for(i=0;i<n;i++){
        maxsum=max(maxsum,rowsum[i]);
        maxsum=max(maxsum,colsum[i]);
    }
    for(i=0,j=0;i<n && j<n;){
        int req=min(maxsum-rowsum[i],maxsum-colsum[j]);
        v[i][j]+=req;
        rowsum[i]+=req;
        colsum[j]+=req;
        count1+=req;
        if(rowsum[i]==maxsum){
            ++i;
        }
        if(colsum[j]==maxsum){
            ++j;
        }
    }
    cout<<count1<<"\n";
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}