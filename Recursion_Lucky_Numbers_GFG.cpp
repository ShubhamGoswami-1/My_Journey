#include<bits/stdc++.h>
using namespace std;
bool Solve(int n,int k){
   if(n<k){
       return true;
   }
   if(n%k==0){
       return false;
   }
   return Solve(n-(n/k),k+1);
}
int main()
{
    int n;
    cin>>n;
    cout<<Solve(n,2);
    return 0;
}