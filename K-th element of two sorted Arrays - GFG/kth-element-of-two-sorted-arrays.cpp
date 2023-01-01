//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        int l1 = 0,l2 = 0,left = 0,res;
        while(l1<n && l2 < m){
            if(arr1[l1] <= arr2[l2]){
                res = arr1[l1];
                l1++;
            }
            else{
                res = arr2[l2];
                l2++;
            }
            if(left == k-1){
                return res;
            }
            left++;
            
        }
        while(l1 != n){
            res = arr1[l1];
            if(left == k-1){
                return res;
            }
            left++;
            l1++;
        }
        while(l2 != m){
            res = arr2[l2];
            if(left == k-1){
                return res;
            }
            left++;
            l2++;
        }
        return -1;
    }
};

//{ Driver Code Starts.
 
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		int arr1[n],arr2[m];
		for(int i=0;i<n;i++)
			cin>>arr1[i];
		for(int i=0;i<m;i++)
			cin>>arr2[i];
		
		Solution ob;
        cout << ob.kthElement(arr1, arr2, n, m, k)<<endl;
	}
    return 0;
}
// } Driver Code Ends