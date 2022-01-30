#include<bits/stdc++.h>
using namespace std;
int Josephus_GFG(int n,int k){
    if(n==1){
        return 0;
    }
    return (Josephus_GFG(n-1,k)+k)%n;
}
int main()
{
    int n,k;
    cin>>n>>k;
    cout<<Josephus_GFG(n,k);
    return 0;
}