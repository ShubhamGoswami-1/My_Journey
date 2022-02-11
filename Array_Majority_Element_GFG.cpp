/*
Boyer-Moore Majority Voting Algorithm 
https://en.wikipedia.org/wiki/Boyer%E2%80%93Moore_majority_vote_algorithm
*/
#include<bits/stdc++.h>
using namespace std;
int Solve(vector<int>v){
    int count1=1,res=0;
    for(int i=1;i<v.size();i++){
        if(v[res]==v[i]){
            ++count1;
        }
        else{
            --count1;
        }
        if(count1==0){
            count1=1;
            res=i;
        }
    }
    count1=0;
    for(int i=0;i<v.size();i++){
        if(v[res]==v[i]){
           ++count1;
        }
    }
    if(count1>(v.size()/2)){
        return res;
    }
    return -1;
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