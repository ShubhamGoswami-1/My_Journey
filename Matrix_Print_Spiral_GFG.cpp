#include<bits/stdc++.h>
using namespace std;
void Solve(vector<vector<int> >v){
    int top=0,right=v.size()-1,bottom=v.size()-1,left=0;
    while(top<=bottom && left<=right){
        for(int i=left;i<=right;i++){
            cout<<v[top][i]<<" ";
        }
        top++;
        for(int i=top;i<=bottom;i++){
            cout<<v[i][right]<<" ";
        }
        right--;
        if(top<=bottom){
            for(int i=right;i>=left;i--){
                cout<<v[bottom][i]<<" ";
            }
            bottom--;
        }
        if(left<=right){
            for(int i=bottom;i>=top;i--){
                cout<<v[i][left]<<" ";
            }
            left++;
        }
    }
}
int main()
{
    int n,i,j;
    cin>>n;
    vector<vector<int> >v;
    for(i=0;i<n;i++){
        vector<int>v1(n);
        for(j=0;j<n;j++){
            cin>>v1[j];
        }
        v.push_back(v1);
    }
    Solve(v);
    return 0;
}
/*
4
1 2 3 4
5 6 7 8
9 10 11 12
*/