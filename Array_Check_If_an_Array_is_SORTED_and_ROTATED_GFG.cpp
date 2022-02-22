/*
https://www.geeksforgeeks.org/check-if-an-array-is-sorted-and-rotated/
*/
#include<bits/stdc++.h>
using namespace std;
bool Solve(vector<int>v){
    int i,count1=0,count2=0;
    for(i=0;i<v.size()-1;i++){
        if(v[i]<v[i+1]){
            count1+=1;
        }
        else{
            count2+=1;
        }
    }
    if(count1==1 || count2==1){
        if(v[v.size()-1]<v[0]){
            count1+=1;
        }
        else{
            count2+=1;
        }
        if(count1==1 || count2==1){
            return true;
        }
    }
    return false;
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