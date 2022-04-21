// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution{
    public:
    //Complete this function
    //Function to sort the array according to frequency of elements.
    static bool mycomp(const pair<int,int> &a,const pair<int,int> &b){
        if(a.second==b.second){
            return (a.first<b.first);
        }
        return (a.second>b.second);
    }
    vector<int> sortByFreq(int arr[],int n)
    {
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        vector<pair<int,int> >v;
        for(auto i : m){
            v.push_back(make_pair(i.first,i.second));
        }
        sort(v.begin(),v.end(),mycomp);
        vector<int>res;
        for(auto i : v){
            for(int j=0;j<i.second;j++){
                res.push_back(i.first);
            }
        }
        return res;
    }
};

// { Driver Code Starts.

int main() {
	
	
	int t;
	cin >> t;
	
	
	while(t--){
	    
	    
	    int n;
	    cin >> n;
	    
	    int a[n+1];
	    
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    Solution obj;
	    vector<int> v;
	    v = obj.sortByFreq(a,n);
	    for(int i:v)
	        cout<<i<<" ";
	    cout << endl;
	}
	
	return 0;
}

  // } Driver Code Ends