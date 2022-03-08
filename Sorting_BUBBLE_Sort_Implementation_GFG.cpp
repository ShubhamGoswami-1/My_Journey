/*
Implementing bubble sort with a bit optimization in the cases when 
the array is already sorted so in first phase no swap performed means
the vector is already sorted
also if the array is sorted in the mddle of the operation and no further 
operation needed , its get sorted then also the this checking
for a swap operation helps to avoid further unncessary traversing
Time - O(n^2)
Inplace space - O(1)
stable (no swap when adjacent values are same)
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    vector<int>v(n);
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n-1;i++){
        bool swapped=false;
        for(int j=0;j<n-i-1;j++){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
                swapped=true;
            }
        }
        if(swapped==false){
            break;
        }
    }
    for(auto i : v){
        cout<<i<<" ";
    }
    cout<<"\n";
    return 0;
}