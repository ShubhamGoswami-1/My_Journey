/*
Time : O(n^2)
Two Pointer Approach
*/
#include<bits/stdc++.h>
using namespace std;
int Solve(vector<int>v){
    int count1=0;
    sort(v.begin(),v.end());
    for(int i=v.size()-1;i>=1;i--){
        int left=0,right=i-1;
        while(left<right){
            if(v[left]+v[right]>v[i]){
                count1+=(right-left);
                right--;
            }
            else{
                left++;
            }
        }
    }
    return count1;
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
6 4 9 7 8 
7
2 1 3 5 5 2 9
*/