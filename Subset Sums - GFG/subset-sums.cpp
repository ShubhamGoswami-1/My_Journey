//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    void Solve(vector<int>arr,int ind,vector<int>&res,int sum){
        if(ind == arr.size()){
            res.push_back(sum);
            return;
        }
        Solve(arr,ind+1,res,sum+arr[ind]);
        Solve(arr,ind+1,res,sum);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        sort(arr.begin(),arr.end());
        vector<int>res;
        Solve(arr,0,res,0);
        return res;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends