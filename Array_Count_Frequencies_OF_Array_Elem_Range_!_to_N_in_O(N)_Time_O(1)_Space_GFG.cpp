/*
count the frequencies of the range 1 to N 
Elements in array given of size N and the values also in range 1 to N
GFG search :- count the frequenies of all array elements in O(N) time and O(1)space
*/
#include<bits/stdc++.h>
using namespace std;
void Solve(vector<int> &v,int n){
    int i;
    for(i=0;i<n;i++){
        v[i]--;
    }
    for(i=0;i<n;i++){
        v[v[i]%n]+=n;
    }
    for(i=0;i<n;i++){
        cout<<i+1<<" = "<<v[i]/n<<"\n";
    }
}
int main()
{
    int n,i;
    cin>>n;
    vector<int>v(1000000);
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    Solve(v,n);
    return 0;
}