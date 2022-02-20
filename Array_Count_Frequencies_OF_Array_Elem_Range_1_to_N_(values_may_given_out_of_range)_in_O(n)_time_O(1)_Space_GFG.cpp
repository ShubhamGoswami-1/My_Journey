/*
count the frequencies of the range 1 to N 
Elements in array given of size N and the values may greater than range 1 to N
GFG search :- count the frequenies of all array elements in O(N) time and O(1)space
*/
#include<bits/stdc++.h>
using namespace std;
void Solve(vector<int>v,int n){
    int i=0;
    for(i=0;i<v.size();i++){
        if(v[i]>n){
            v[i]=0;
        }
    }
    i=0;
    while(i<v.size()){
        if(v[i]<=0){
            i++;
            continue;
        }
        int elementindex=v[i]-1;
        if(v[elementindex]>0){
            v[i]=v[elementindex];
            v[elementindex]=-1;
        }
        else{
            v[elementindex]--;
            v[i]=0;
            i++;
        }
    }
    for(auto i : v){
        if(abs(i)<n){
        cout<<abs(i)<<" ";
        }
        else{
            cout<<"0 ";
        }
    }
    cout<<"\n";
    return ;
}
int main()
{
    int n,i;
    cin>>n;
    vector<int>v(n);
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    Solve(v,n);
    return 0;
}