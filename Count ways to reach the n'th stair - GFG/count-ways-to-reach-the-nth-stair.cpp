//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to count number of ways to reach the nth stair.
    const unsigned int M = 1000000007;
    int Solve(int n,vector<int>&dp){
        if(n < 0){
            return 0;
        }
        if(n == 0){
            return 1;
        }
        if(dp[n] != -1){
            return dp[n];
        }
        return dp[n] = (Solve(n-1,dp)%M + Solve(n-2,dp)%M)%M;
    }
    int countWays(int n)
    {
        vector<int>dp(n+1,-1);
        int res = Solve(n,dp);
        return res;
    }
};



//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking stair count
        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}

// } Driver Code Ends