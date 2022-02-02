#include<bits/stdc++.h>
using namespace std;
int Solve(int n){
    if(n==0){
        return 0;
    }
    int sum=(n%10)+Solve(n/10); 
    if(sum<10){
        return sum;
    }
    Solve(sum);
}
int main()
{
    int n;
    cin>>n;
    cout<<Solve(n);
    return 0;
} 