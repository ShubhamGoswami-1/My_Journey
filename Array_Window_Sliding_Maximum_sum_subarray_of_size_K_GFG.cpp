/*
Find the maximum sum subarray with a given size k
*/
#include<bits/stdc++.h>
using namespace std;
int Solve(vector<int> v,int k){
    int sum=0;
    for(int i=0;i<k;i++){
        sum+=v[i];
    }
    int max_sum=sum;
    for(int i=k;i<v.size();i++){
        sum+=(v[i]-v[i-k]);
        max_sum=max(max_sum,sum);
    }
    return max_sum;
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
6
1 8 30 -5 20 7
3
45
*/