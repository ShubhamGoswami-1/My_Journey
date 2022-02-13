#include<bits/stdc++.h>
using namespace std;
vector<int> Solve(int k,int m){
    vector<int>res;
    int i,j=0,sum=1;
    for(i=0;i<k-1;i++){
        res.push_back(0);
    }
    res.push_back(1);
    for(i=k+1;i<=m;i++){
        res.push_back(sum);
        sum-=res[j];
        j++;
        sum+=res[res.size()-1];
    }
    return res;
}
int main()
{
    int k,m;
    cin>>k>>m;
    vector<int>res=Solve(k,m);
    for(auto i : res){
        cout<<i<<" ";
    }
    cout<<"\n";
    return 0;
}