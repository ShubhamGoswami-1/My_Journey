/*
    Searching an element in infinite sized array in c++
    UNBOUNDED BINARY SEARCH
    Time Complexity - O(log (Position_Of_the_element_to_be_Searched) )
*/
#include<bits/stdc++.h>
using namespace std;
int Binary_Search(vector<int>v,int x, int low,int high){
    while(low<=high){
        int mid=(low+high)/2;
        if(v[mid]==x){
            return mid;
        }
        else if(v[mid]<x){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}
int Solve(vector<int>v,int x){
    if(v[0]==x){
        return 0;
    }
    int i=1;
    while(v[i]<x){
        i*=2;
    }
    if(v[i]==x){
        return i;
    }
    return Binary_Search(v,x,(i/2)+1,i-1);
}
int main()
{
    int n,i,x;
    cin>>n;
    vector<int>v(n);
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    cin>>x;
    sort(v.begin(),v.end());
    cout<<Solve(v,x);
    return 0;
}