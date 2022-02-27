/*
It works in O(N) time and in O(1) space only if it is sorted 
otherwise u have to sort it first which takes O(n log n) for sorting
and then o(n) for applying two pointer whhere overall will be O(n log n)
*/
#include<bits/stdc++.h>
using namespace std;
bool Solve(vector<int>v,int sum){
    int low=0,high=v.size()-1;
    while(low<high){
        if((v[low]+v[high])==sum){
            return true;
        }
        else if((v[low]+v[high])>sum){
            high--;
        }
        else{
            low++;
        }
    }
    return false;
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