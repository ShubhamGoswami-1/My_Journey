#include<bits/stdc++.h>
using namespace std;
void Reverse(vector<int> &a,int low,int high){
    while(low<high){
        swap(a[low],a[high]);
        low++;
        high--;
    }
}
void Solve(vector<int> &a,int d){
    Reverse(a,0,d-1);
    cout<<"First :- \n";
    for(auto i : a){
        cout<<i<<" ";
    }
    cout<<"\n**********\n";
    Reverse(a,d,a.size()-1);
    cout<<"second :- \n";
    for(auto i : a){
        cout<<i<<" ";
    }
    Reverse(a,0,a.size()-1);
}
int main()
{
    int n,i,d;
    cin>>n;
    vector<int>a(n);
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>d;
    Solve(a,d);
    cout<<"\n**********\n";
    cout<<"Final :- \n";
    for(auto i : a){
        cout<<i<<" ";
    }
    return 0;
}