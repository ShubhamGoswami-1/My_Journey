#include<bits/stdc++.h>
using namespace std;
void Reverse(vector<int> &v,int low,int high){
    while(low<high){
        swap(v[low],v[high]);
        low++;
        high--;
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
    Reverse(v,0,v.size()-1);
    for(auto i : v){
        cout<<i<<" ";
    }
    return 0;
}