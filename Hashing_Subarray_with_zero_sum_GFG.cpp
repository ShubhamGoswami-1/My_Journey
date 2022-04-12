#include<bits/stdc++.h>
using namespace std;
bool Solve(vector<int>v){
    unordered_set<int>s;
    int pre_sum=0,i;
    for(i=0;i<v.size();i++){
        pre_sum+=v[i];
        if(s.find(pre_sum)!=s.end()){
            return true;
        }
        if(pre_sum==0){
            return true;
        }
        s.insert(pre_sum);
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
5
-3 4 -3 -1 1
1

4
-3 2 1 4
1

6
1 4 13 -3 -10 5
1

5
-1 4 -3 5 1
1

5
3 1 -2 5 6 
0

4
5 6 0 8
1
*/