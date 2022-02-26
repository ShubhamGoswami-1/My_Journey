#include<bits/stdc++.h>
using namespace std;
int Solve(vector<int>v){
    int low=0,high=v.size()-1,mid;
    while(low<=high){
        mid=(low+high)/2;
        if( (mid==0 || v[mid]>=v[mid-1] ) &&
            (mid==v.size()-1 || v[mid]>=v[mid+1]) ){
                return v[mid];
        }
        if(mid>0 && v[mid]<=v[mid-1]){ // here we have to add the mid>0
            high=mid-1;//because in the above if the mid==0 have a OR(||)
        }//so its not ensured by prev if it will always cover the mid=0 
        // thats why its used if mid>0 to ensure 
        else{
            low=mid+1;
        }
    }
    return -1 ;//it will never return -1 
    //there must always be a peak element in any array 
}
/*
Here's an approach of independent array and in 
independent array there must always be a peak element
Independent array or subarray :-
whwn an array element is greater than its successive element
then the leftmost part is an independent array or subarray
There will always have a peak element to this independent array 
so here when we compare the adjacent elements of the mid 
we go the independent array and skip the other part ,
note here there may be also some peak element present there
in the skipped part coz may be there have an element in the 
subarray which is greater than its successive 
for example increasing order sorted array have only one peak element
that is the last element
*/
int main()
{
    int n,i;
    cin>>n;
    vector<int>v(n);
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<Solve(v);
    return 0;
}