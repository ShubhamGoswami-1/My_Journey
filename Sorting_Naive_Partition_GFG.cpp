/*
Naive Partition :-
Time : O(n)
Space : O(n)
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> Solve(vector<int> v,int pivot){
    pivot=v[pivot];
    int i;
    vector<int>res;
    for(i=0;i<v.size();i++){
        if(v[i]<pivot){
            res.push_back(v[i]);
        }
    }
    for(i=0;i<v.size();i++){
        if(v[i]==pivot){
            res.push_back(v[i]);
        }
    }
    for(i=0;i<v.size();i++){
        if(v[i]>pivot){
            res.push_back(v[i]);
        }
    }
    return res;
}
int main()
{
    int n,i,p;
    cin>>n;
    vector<int>v(n);
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    cin>>p;
    vector<int> res=Solve(v,p);
    for(auto i : res){
        cout<<i<<" ";
    }
    return 0;
}
/*
8
5 3 8 4 2 7 1 10
5
*/