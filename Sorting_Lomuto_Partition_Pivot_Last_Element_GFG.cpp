#include<bits/stdc++.h>
using namespace std;

int Solve(vector<int>&v){
    int pivot=v[v.size()-1];
    int left=-1,j=0;
    for(j=0;j<=v.size()-2;j++){
        if(v[j]<pivot){
            left++;
            swap(v[j],v[left]);
        }
    }
    return left+1;
}
int main()
{
    int n,i,pivot;
    cin>>n;
    vector<int>v(n);
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    cin>>pivot;
    cout<<Solve(v)<<"\n";
  //cout<<Solve(v,pivot)<<"\n";
  //swap(v[pivot],v[v.size()-1]);
    for(auto i : v){
        cout<<i<<" ";
    }
    cout<<"\n";
    return 0;
}