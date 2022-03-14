#include<bits/stdc++.h>
using namespace std;
int Quick_Hoare(vector<int> &v,int low,int high){
    int pivot=v[low],i=low-1,j=high+1;
    while(i<j){
        i++;
        while(v[i]<pivot){
            i++;
        }
        j--;
        while(v[j]>pivot){
            j--;
        }
        if(i>=j){
            return j;
        }
        swap(v[i],v[j]);
    }
}
void Quick_Sort(vector<int> &v,int low,int high){
    if(low<high){
        int p=Quick_Hoare(v,low,high);
        Quick_Sort(v,low,p);
        Quick_Sort(v,p+1,high);
    }
}
int main()
{
    int n,i;
    cin>>n;
    vector<int>v(n);
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    Quick_Sort(v,0,n-1);
    for(auto i : v){
        cout<<i<<" ";
    }
    return 0;
}
/*
7
13 14 12 3 6 7 7
*/