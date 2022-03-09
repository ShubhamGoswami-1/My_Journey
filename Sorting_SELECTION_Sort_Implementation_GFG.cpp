/*
Selection Sort
In-Place
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
    for(i=0;i<n-1;i++){
        int min_pos=i;
        for(int j=i+1;j<n;j++){
            if(v[min_pos]>v[j]){
                min_pos=j;
            }
        }
        swap(v[min_pos],v[i]);
    }
    for(auto i : v){
        cout<<i<<" ";
    }
    return 0;
}