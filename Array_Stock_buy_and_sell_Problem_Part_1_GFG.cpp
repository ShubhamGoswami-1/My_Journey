#include<bits/stdc++.h>
using namespace std;
int Solve(vector<int>v,int start,int end){
    if(end<=start){
        return 0;
    }
    int profit=0;
    for(int j=start;j<=end;j++){
        for(int i=j+1;i<=end;i++){
            if(v[j]<v[i]){
                int current_profit=(v[i]-v[j])
                +Solve(v,start,j-1)
                +Solve(v,i+1,end);
                profit=max(profit,current_profit);
            }
        }
    }
    return profit;
}
int main()
{
    int n,i;
    cin>>n;
    vector<int>v(n);
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<Solve(v,0,n-1);
    return 0;
}