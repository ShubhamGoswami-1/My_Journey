#include<bits/stdc++.h>
using namespace std;
int Solve(vector<int>L,vector<int>R){
    int i,sum=0,max1=0,max1_pos=-1;
    vector<int>res(1000);
    for(i=0;i<L.size();i++){
        res[L[i]]+=1;
        res[R[i]+1]-=1;
    }
    for(i=0;i<res.size();i++){
        sum+=res[i];
        if(max1<sum){
            max1=sum;
            max1_pos=i;
        }
    }
    return max1;
}
int main()
{
    int n,i;
    cin>>n;
    vector<int>L(n),R(n);
    for(i=0;i<n;i++){
        cin>>L[i];
    }
    for(i=0;i<n;i++){
        cin>>R[i];
    }
    cout<<Solve(L,R);
    return 0;
}