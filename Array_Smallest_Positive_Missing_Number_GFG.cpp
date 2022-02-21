#include<bits/stdc++.h>
using namespace std;
int MoveLeft(vector<int> &v){
    int i,j=0;
    for(i=0;i<v.size();i++){
        if(v[i]<=0){
            swap(v[i],v[j]);
            j++;
        }
    }
    cout<<"after moving left \n";
    for(auto i: v){
        cout<<i<<" ";
    }
    cout<<"\n";
    return j;
}
int Solve1(vector<int>v){
    int i;
    for(i=0;i<v.size();i++){
        if(abs(v[i])>0 && v[v[i]-1]>0 && v[i]<=v.size()){
            v[v[i]-1]*=(-1);
        }
    }
    cout<<"After making negatives\n";
    for(auto i: v){
        cout<<i<<" ";
    }
    cout<<"\n";
    for(i=0;i<v.size();i++){
        if(v[i]>0){
            return i+1;
        }
    }
    return v.size()+1;
}
int Solve(vector<int>v){
    int i;
    i=MoveLeft(v);
    vector<int>v1;
    copy(v.begin()+i,v.end(),back_inserter(v1));
    int res=Solve1(v1);
    return res;
}
int main()
{
    int n,i;
    cin>>n;
    vector<int>v(n);
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<Solve(v);
    return 0;
}