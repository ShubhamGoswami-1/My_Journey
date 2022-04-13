#include<bits/stdc++.h>
using namespace std;
int Solve(vector<int>v,int sum){
    int pre_sum=0,res=0;
    unordered_map<int,int>m;
    for(int i=0;i<v.size();i++){
        pre_sum+=v[i];
        if(pre_sum==sum){
            res=i+1;
        }
        if(m.find(pre_sum)==m.end()){
            m.insert({pre_sum,i+1});
        }
        if(m.find(pre_sum-sum)!=m.end()){
            res=max(res,i-m[pre_sum-sum]+1);
        }
    }
    return res;
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
5 8 -4 -4 9 -2 2
0
3

7
5 2 -2 9 8 -4 -4 
0
3

8
3 1 0 1 8 2 3 6
5
4

3
8 3 7 
15
0

8
8 3 1 5 -6 6 2 2 
4
4

3
5 2 3 
5
2
*/