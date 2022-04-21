#include<bits/stdc++.h>
using namespace std;
int Solve(vector<int>v,int sum){
    int count1=0,pre_sum=0;
    unordered_map<int,int>m;
    for(int i=0;i<v.size();i++){
        pre_sum+=v[i];
        if(pre_sum==sum){
            ++count1;
        }
        if(m.find(pre_sum-sum)!=m.end()){
            count1+=m[pre_sum-sum];
        }
        m[pre_sum]++;
    }
    return count1;
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
24 16 5 26 27 2
2
1

5
10 2 -2 -20 10 
-10 
3

28
16 9 19 19 16 16 13 25 24 24 7 17 22 5 21 2 22 4 22 10 5 15 0 3 13 7 25 12
16
5

18
2 14 1 16 0 17 0 17 3 12 1 4 13 1 13 14 10 1
67
4

17
14 12 8 13 9 9 0 1 0 6 9 9 13 18 8 11 5
80
2
*/