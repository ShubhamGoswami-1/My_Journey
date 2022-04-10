#include<bits/stdc++.h>
using namespace std;
int random_Partition(vector<int>&v,int pivot_index,int low,int high){
    int ptr=low-1;
    while(low<high){
        if(v[pivot_index]>v[low]){
            ptr++;
            swap(v[ptr],v[pivot_index]);
        }
        low++;
    }
    swap(v[pivot_index],v[ptr+1]);
    return ptr+1;
}
int Solve(vector<int>&v){
    int median_pos=v.size()/2;
    int low=0,high=v.size()-1,p,range=(high-low+1);
    while(low<=high){
        int temp1=(low+(rand()%range))-1;
        p=random_Partition(v,temp1,low,high);
        if(p==median_pos){
            return v[p];
        }
        else if(p>=median_pos){
            high=p-1;
        }
        else{
            low=p+1;
        }
    }
    return -1;
}
int main()
{
    int n,i,j;
    cin>>n;
    vector<vector<int> >v;
    vector<int>temp;
    for(i=0;i<n;i++){
        vector<int>v1(n);
        for(j=0;j<n;j++){
            cin>>v1[j];
            temp.push_back(v1[i]);
        }
        v.push_back(v1);
    }
    cout<<Solve(temp);
    return 0;
}
/*
3
1 10 20 
15 25 30
5 8 40
*/