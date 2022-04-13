#include<bits/stdc++.h>
using namespace std;
bool Solve(vector<int>v,int sum){
    unordered_set<int>s;
    int pre_sum=0;
    for(int i=0;i<v.size();i++){
        pre_sum+=v[i];
        if(pre_sum==sum){
            return true;
        }
        if(s.find(pre_sum-sum)!=s.end()){
            return true;
        }
        s.insert(pre_sum);
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
6
5 8 6 13 3 -1 
22
1

6
12 7 6 13 3 -1
22
1

4
5 3 2 -1 
4
1

4
2 3 4 6 
9
1
*/