#include<bits/stdc++.h>
using namespace std;
bool Solve(vector<int>v,int x){
    unordered_set<int>s;
    for(int i=0;i<v.size();i++){
        if(s.find(abs(x-v[i]))!=s.end()){
            return true;
        }
        else{
            s.insert(v[i]);
        }
    }
    return false;
}
int main()
{
    int n,i,x;
    cin>>n;
    vector<int>v(n);
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    cin>>x;
    cout<<Solve(v,x);
    return 0;
}
/*
4
8 3 3 2 
6
1

5
8 3 4 2 5 
6
1

5
3 2 8 15 -8  
17
1

4
2 1 6 3  
6
0

4
5 8 -3 6 
3
1
*/