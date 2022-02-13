#include<bits/stdc++.h>
using namespace std;
void Solve(vector<int>v){
    for(int i=1;i<v.size();i++){
        if(v[i]!=v[i-1]){
            if(v[i]!=v[0]){
                cout<<"From "<<i<<" to ";
            }
            else{
                cout<<(i-1)<<"\n";
            }
        }
    }if(v[0]!=v[v.size()-1]){
        cout<<v.size()-1<<"\n";
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
    Solve(v);   
    return 0;
}
/*
******************
10
0 0 1 1 0 0 1 1 0 1
From 2 to 3
From 6 to 7
From 9 to 9
******************
10
0 0 1 1 0 0 1 1 1 0 
From 2 to 3
From 6 to 8
******************
*/