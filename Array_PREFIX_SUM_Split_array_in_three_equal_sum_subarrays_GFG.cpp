/*
Program to find :-
if the array can be divided into three parts of equal sum 
*/
#include<bits/stdc++.h>
using namespace std;
bool Solve(vector<int>v){
    int sum=0,presum=0,s1=0,s2=0,i;
    for(i=0;i<v.size();i++){
        sum+=v[i];
    }
    if(sum%3==0){
        for(i=0;i<v.size();i++){
            presum+=v[i];
            v[i]=presum;
            if(presum==(sum/3)){
                s1=1;
            }
            if(presum==(2*(sum/3))){
                s2=1;
            }
        }
        if(s1==1 && s2==1){
            return true;
        }
        else{
            return false;
        }
    }
    else{
        return false;
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
    cout<<Solve(v);
    return 0;
}