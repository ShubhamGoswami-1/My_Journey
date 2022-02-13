/*
Only possible when all non - negative vals present
*/
#include<bits/stdc++.h>
using namespace std;
bool Solve(vector<int>v,int sum){
    int start=0,end,curr_sum=v[0];
    for(end=1;end<v.size();end++){
        while(curr_sum>sum && start<end-1){
            curr_sum=curr_sum-v[start];
            start++;
        }
        if(curr_sum==sum){
            return true;
        }
        if(end<v.size()){
        curr_sum+=v[end];}
    }
    return (curr_sum==sum);
}
int main()
{
    int n,i,sum;
    cin>>n;
    vector<int>v(n);
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    cin>>sum;
    cout<<Solve(v,sum);
    return 0;
}
/*
8
15 2 4 8 9 5 10 23
23
6
1 4 20 3 10 5
33
*/