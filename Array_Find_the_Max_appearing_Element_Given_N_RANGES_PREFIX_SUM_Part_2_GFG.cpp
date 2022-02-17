#include<bits/stdc++.h>
using namespace std;
int Solve(vector<int>L,vector<int>R){
    vector<int>res(1000);
    for(int i=0;i<L.size();i++){
        res[L[i]]++;
        res[R[i]+1]--;
    }
    int max1=res[0],max1_pos=0;
    for(int i=1;i<res.size();i++){
        res[i]+=res[i-1];
        if(max1<res[i]){
            max1=res[i];
            max1_pos=i;
        }
    }
    return max1_pos;
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