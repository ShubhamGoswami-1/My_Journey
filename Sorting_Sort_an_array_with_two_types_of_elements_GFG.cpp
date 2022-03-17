#include<bits/stdc++.h>
using namespace std;
void Solve(vector<int>&v){
    int low=-1,high=v.size();
    while(low<high){
        low++;
        while(v[low]<0){
            low++;
        }
        high--;
        while(v[high]>=0){
            high--;
        }
        if(low>=high){
            return;
        }
        swap(v[low],v[high]);
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
    for(auto i: v){
        cout<<i<<" ";
    }
    cout<<"\n";
    return 0;
}