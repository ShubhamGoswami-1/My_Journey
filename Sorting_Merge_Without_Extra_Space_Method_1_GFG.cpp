/*
Time Complexity: The worst case time complexity of
code/algorithm is O(m*n). The worst case occurs 
when all elements of ar1[] are greater than all elements of ar2[].
*/
#include<bits/stdc++.h>
using namespace std;
void Solve(vector<int>&v1,vector<int>&v2){
    for(int i=v2.size()-1;i>=0;i--){
        int last=v1[v1.size()-1],j;
        for(j=v1.size()-2;j>=0 && v1[j]>v2[i];j--){
            v1[j+1]=v1[j];
        }
        if(j!=v1.size()-2 || last>v2[i]){
            v1[j+1]=v2[i];
            v2[i]=last;
        }
    }
}
int main()
{
    int n,m,i;
    cin>>n;
    vector<int>v1(n);
    for(i=0;i<n;i++){
        cin>>v1[i];
    }
    cin>>m;
    vector<int>v2(m);
    for(i=0;i<m;i++){
        cin>>v2[i];
    }
    Solve(v1,v2);
    for(auto i : v1){
        cout<<i<<" ";
    }
    for(auto i : v2){
        cout<<i<<" ";
    }
    return 0;
}
/*
2 
1 35
8
6 9 13 15 20 25 29 46
1 6    9 13 15 20 25 29 35 46 
*/