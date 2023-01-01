// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
        
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int A[], int N) 
    { 
        // Your code here
        int minleft[N];
        int res = 0;
        minleft[0] = A[0];
        for(int i = 1;i<N;i++){
            minleft[i] = min(A[i],minleft[i-1]);
        }
        int i = N-1,j = N-1;
        while(i>=0 && j>=0){
            if(A[j] >= minleft[i]){
                res = max(res,j-i);
                i--;
            }
            else{
                j--;
            }
        }
        return res;
    }
};

// { Driver Code Starts.
  
/* Driver program to test above functions */
int main() 
{
    int T;
    //testcases
    cin>>T;
    while(T--){
        int num;
        //size of array
        cin>>num;
        int arr[num];
        
        //inserting elements
        for (int i = 0; i<num; i++)
            cin>>arr[i];
        Solution ob;
        
        //calling maxIndexDiff() function
        cout<<ob.maxIndexDiff(arr, num)<<endl;    
        
    }
    return 0;
}   // } Driver Code Ends