#include<bits/stdc++.h>
using namespace std;
void Counting_Sort(vector<int>&v,int exp){
    vector<int>count1(10);
    vector<int>res(v.size());
    for(int i=0;i<v.size();i++){
        count1[(v[i]/exp)%10]++;
    }
    for(int i=1;i<count1.size();i++){
        count1[i]=count1[i]+count1[i-1];
    }
    for(int i=v.size()-1;i>=0;i--){
        res[count1[(v[i]/exp)%10]-1]=v[i];
        count1[(v[i]/exp)%10]--;
    }
    for(int i=0;i<v.size();i++){
        v[i]=res[i];
    }
}
void Solve(vector<int>&v){
    int max1=v[0];
    for(int i=1;i<v.size();i++){
        if(max1<v[i]){
            max1=v[i];
        }
    }
    for(int i=1;max1/i>0;i*=10){
        Counting_Sort(v,i);
    }
}
int main()
{
    int n,i;
    cin>>n;
    vector<int>v(n);
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    Solve(v);
    for(auto i : v){
        cout<<i<<" ";
    }
    return 0;
}
/*
6
319 212 6 8 100 50
*/