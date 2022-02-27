#include<bits/stdc++.h>
using namespace std;
bool isPair(vector<int>v,int low,int high, int x){
    while(low<high){
        if((v[low]+v[high])==x){
            return true;
        }
        else if((v[low]+v[high])<x){
            low++;
        }
        else{
            high--;
        }
    }
    return false;
}
bool Solve(vector<int>v,int sum){
    for(int i=0;i<v.size();i++){
        if(isPair(v,i+1,v.size()-1,sum-v[i])){
            return true;
        }
    }
    return false;
}
int main()
{
    int n,i,sum;
    cin>>n;
    vector<int>v(n);
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    cin>>sum;
    cout<<Solve(v,sum);
    return 0;
}
/*
7
2 3 4 5 6 8 20
32
*/