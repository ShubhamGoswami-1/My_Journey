#include<bits/stdc++.h>
using namespace std;
int Solve(vector<int>v){
    int count1=1,max1=1;
    for(int i=1;i<v.size();i++){
        if(v[i]%2 != v[i-1]%2){
            ++count1;
            max1=max(count1,max1);

        }
        else{
            count1=1;
        }
    }
    return max1;
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