#include<bits/stdc++.h>
using namespace std;
bool isPair(vector<int>v,int sum,int index){
    int left=index+1,right=v.size()-1;
    while(left<right){
        if(v[left]+v[right]+sum==0){
            return true;
        }
        else if(v[left]+v[right]+sum>0){
            right--;
        }
        else{
            left++;
        }
    }
    return false;
}
bool Solve(vector<int>&v){
    sort(v.begin(),v.end());
    int i=0;
    for(i=0;i<v.size();i++){
        if(isPair(v,v[i],i)){
            return true;
        }
    }
    return false;
}
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
/*
3
1 2 3
0
5
0 -1 2 -3 1
1
6
97 -27 2 -34 61 -39
1
*/