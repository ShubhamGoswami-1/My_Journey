#include<bits/stdc++.h>
using namespace std;
int Count(vector<int> v,int n,int sum){
    if(n==0){
        if(sum==0){
            return 1;
        }
        else{return 0;}
    }
    return Count(v,n-1,sum-v[n-1]) + Count(v,n-1,sum);
}
int main()
{   
    int n,i,temp,sum,count1=0;
    cin>>n;
    vector<int>v;
    for(i=0;i<n;i++){
        cin>>temp;
        v.push_back(temp);
    }
    cin>>sum;
    cout<<Count(v,n,sum);
    return 0;
}