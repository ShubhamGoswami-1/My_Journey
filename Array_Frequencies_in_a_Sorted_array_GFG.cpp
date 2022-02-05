#include<bits/stdc++.h>
using namespace std;
void Solve(vector<int>v){
    int count1=1,i;
    if(v.size()>1){
    for(i=1;i<v.size();i++){
        if(v[i]==v[i-1]){
            ++count1;
        }
        else{
            cout<<v[i-1]<<" = "<<count1<<"\n";
            count1=1;
        }
    }
    cout<<v[i-1]<<" = "<<count1<<"\n";
    }
    else{  // Condition if a single value array occurs it dont go to 
    // above loop (coz the index starting from 1 )
        cout<<v[0]<<" = 1\n";
    }
}
int main()
{
    int n,i;
    cin>>n;
    vector<int> v(n),res;
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    Solve(v);
    return 0;
}