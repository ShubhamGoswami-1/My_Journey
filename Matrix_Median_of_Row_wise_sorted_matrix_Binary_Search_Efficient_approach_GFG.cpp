#include<bits/stdc++.h>
using namespace std;
int Solve(vector<vector<int> >&v){
    int min1=v[0][0],max1=v[0][v.size()-1];
    for(int i=1;i<v.size();i++){
        min1=min(v[i][0],min1);
        max1=max(v[i][v.size()-1],max1);
    }
    int median_pos=(v.size()*v.size()+1)/2;
    while(min1<max1){
        int mid=(min1+max1)/2;
        int mid_pos=0;
        for(int i=0;i<v.size();i++){
            mid_pos+=upper_bound(v[i].begin(),v[i].end(),mid)-v[i].begin();
        }
        if(mid_pos<median_pos){
            min1=mid+1;
        }
        else{
            max1=mid;
        }
    }
    return min1;
}
int main()
{
    int n,i,j;
    cin>>n;
    vector<vector<int> >v;
    vector<int>temp;
    for(i=0;i<n;i++){
        vector<int>v1(n);
        for(j=0;j<n;j++){
            cin>>v1[j];
        }
        v.push_back(v1);
    }
    cout<<Solve(v);
    return 0;
}