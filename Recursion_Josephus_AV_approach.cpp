/*
Josephus problem solved easy with array (By the Aditya V. Approach )
The numbering of people in circle starting with 1 
https://www.youtube.com/watch?v=ULUNeD0N9yI&t=1058s
*/
#include<bits/stdc++.h>
using namespace std;
void Josephus_AV(int n,int k,int index,vector<int> &v){
    if(n==1){
        cout<<v[0]<<"\n";
        return ;
    }
    v.erase(v.begin()+(index+k)%n);
    Josephus_AV(n-1,k,(index+k)%n,v);
}
int main()
{
    int n,k,i;
    cin>>n>>k;
    vector<int> v;
    for(i=0;i<n;i++){
        v.push_back(i+1);
    }
    Josephus_AV(n,k-1,0,v);//k-1 coz we kill the kth not count till k and 
    //the kill the kth + 1 and counting starts with the 
    //starting index i.e 0
    /*
    for(auto a : v){
        cout<<a<<" ";
    }
    */
    return 0;
}