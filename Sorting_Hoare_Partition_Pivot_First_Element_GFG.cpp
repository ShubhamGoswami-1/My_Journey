#include<bits/stdc++.h>
using namespace std;
int Solve(vector<int> &v,int low,int high){
    int i=low-1,j=high+1,pivot=v[0];
    while(i<j){
        i++;
        while(v[i]<pivot){
            i++;
        }
        j--;
        while(v[j]>pivot){
            j--;
        }
        if(i>=j){
            return j;
        }
        swap(v[i],v[j]);
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
    cout<<Solve(v,0,n-1)<<"\n";
    for(auto i : v){
        cout<<i<<" ";
    }
    cout<<"\n";
    return 0;
}
/*
8
5 3 8 4 2 7 1 10 
*/