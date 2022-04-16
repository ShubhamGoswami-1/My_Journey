#include<bits/stdc++.h>
using namespace std;
/*
Naive Approach :- (Sorting) Time - O(N * log N)
int Solve(vector<int>v){
    sort(v.begin(),v.end());
    int res=1,curr=1;
    for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1]+1){
            ++curr;
        }
        else if(v[i]!=v[i-1]){
            res=max(res,curr);
            curr=1;
        }
    }
    return max(res,curr);
}
*/
//  Efficient approach (Hashing) Time - O(N)
int Solve(vector<int>v){
    unordered_set<int>s(v.begin(),v.end());
    int count1=0,res=0;
    for(auto it : s){
        if(s.find((it)-1)!=s.end()){
            continue;
        }
        count1++;
        while(s.find(++it)!=s.end()){
            count1++;
        }
        res=max(res,count1);
        count1=0;
    }
    return res;
}
/*
int Solve(vector<int>v){
    unordered_set<int>s(v.begin(),v.end());
    int res=1;
    for(auto i : s){
        if(s.find(i-1)==s.end()){
            int curr=1;
            while(s.find(i+curr)!=s.end()){
                curr++;
            }
            res=max(res,curr);
        }
    }
    return res;
}
*/
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
8
1 3 4 3 3 2 9 10
4

6
1 3 8 2 9 2
3

6
1 9 3 4 2 20
4

4
8 20 7 30 
2

3
20 30 40 
1

*/