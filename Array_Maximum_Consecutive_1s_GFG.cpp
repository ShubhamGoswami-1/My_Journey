#include<bits/stdc++.h>
using namespace std;
int Solve(vector<int>v){
    int count1=0,i,max1=0;
    for(i=0;i<v.size();i++){
        if(v[i]==0){
            count1=0;
        }
        else{
            count1++;
            max1=max(max1,count1);
        }
    }
    return max1;
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