/*
K th Grammar question 
Solved by Aditya Verma Apprach show in video
https://www.youtube.com/watch?v=5P84A0YCo_Y
*/
#include<bits/stdc++.h>
using namespace std;
int K_th_Grammar(int n,int k){
    if(n==1 && k==1){
        return 0;
    }
    int mid=(pow(2,n-1))/2;
    if(k<=mid){
        return K_th_Grammar(n-1,k);
    }
    else{
        return !(K_th_Grammar(n-1,k-mid));
    }
}
int main()
{
    int n,k;
    cin>>n>>k;
    cout<<K_th_Grammar(n,k);
    return 0;
}
