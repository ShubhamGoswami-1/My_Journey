#include<bits/stdc++.h>
using namespace std;
int Solve(vector<int>v){
    int i,count1=0,max1=0;
    for(i=1;i<v.size();i++){
        if(v[i]>v[i-1]){
            ++count1;
            max1=max(max1,count1);
        }
        else{
            count1=0;
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