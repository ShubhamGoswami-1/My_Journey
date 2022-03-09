/*
Insertion Sort 
Time : O(n^2)
Space : O(1)
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    vector<int>v(n);
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=1;i<n;i++){
        int key=v[i],j=i-1;
        while(j>=0 && v[j]>key){
            v[j+1]=v[j];
            j--;
        }
        v[j+1]=key;
    }
    for(auto i : v){
        cout<<i<<" ";
    }
    return 0;
}
