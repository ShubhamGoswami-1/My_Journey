#include<bits/stdc++.h>
using namespace std;
bool isFeasible(vector<int>v,int mid, int k){
    int req=1,sum=0;
    for(int i=0;i<v.size();i++){
        if(sum+v[i]>mid){
            req++;
            sum=v[i];
        }
        else{
            sum+=v[i];
        }
    }
    return (req<=k);
}
int Solve(vector<int>v,int k){
    int i,sum=v[0],max1=v[0],low,high,mid,temp=0;
    for(i=1;i<v.size();i++){
        sum+=v[i];
        if(max1<v[i]){
            max1=v[i];
        }
    }
    low=max1;
    high=sum;
    while(low<=high){
        mid=(low+high)/2;
        if(isFeasible(v,mid,k)){
            temp=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return temp;
}
int main()
{
    int n,i,k;
    cin>>n;
    vector<int>v(n);
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    cin>>k;
    cout<<Solve(v,k);
    return 0;
}
/*
4
10 20 10 30 
2
40
-------
4
10 20 30 40 
2
60
------
3
10 20 30 
1
60
-------
8
10 5 30 1 2 5 10 10
3
30
-------
4
12 34 67 90
2
113
-------
*/