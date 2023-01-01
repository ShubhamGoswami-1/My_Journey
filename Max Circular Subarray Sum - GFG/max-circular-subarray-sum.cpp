//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // num: size of array
    //Function to find maximum circular subarray sum.
    int kadaneSum(int arr[],int num){
        int res=arr[0],sum = arr[0];
        for(int i = 1;i<num;i++){
            sum = max(sum + arr[i],arr[i]);
            res = max(res,sum);
        }
        return res;
    }
    int circularSubarraySum(int arr[], int num){
        int maxNormal = kadaneSum(arr,num);
        if(maxNormal < 0){
            return maxNormal;
        }
        int sum = 0;
        for(int i = 0;i<num;i++){
            sum += arr[i];
            arr[i] = arr[i] * (-1);
        }
        sum += kadaneSum(arr,num);
        return max(sum,maxNormal);
    }
};

//{ Driver Code Starts.

int main()
 {
	int T;
	
	//testcases
	cin>> T;
	
	while (T--)
	{
	    int num;
	    
	    //size of array
	    cin>>num;
	    int arr[num];
	    
	    //inserting elements
	    for(int i = 0; i<num; i++)
	        cin>>arr[i];
	        
	    Solution ob;
	    //calling function
	    cout << ob.circularSubarraySum(arr, num) << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends