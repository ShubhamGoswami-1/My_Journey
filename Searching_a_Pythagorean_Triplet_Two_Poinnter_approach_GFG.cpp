#include<bits/stdc++.h>
using namespace std;
bool isPair(vector<int> &v,int low,int high,int sum){
    while(low<high){
        if((v[low]+v[high])==sum){
            return true;
        }
        else if((v[low]+v[high])>sum){
            high--;
        }
        else{
            low++;
        }
    }
    return false;
}
int Solve(vector<int> &v){
    int i;
    for(i=0;i<v.size();i++){
        v[i]*=v[i];
    }
    for(i=v.size()-1;i>0;i--){
        if(isPair(v,0,i,v[i])){
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
    sort(v.begin(),v.end());
    cout<<Solve(v);
    return 0;
}