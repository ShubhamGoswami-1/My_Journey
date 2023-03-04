//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        
        vector<vector<int> >distraction = image;
        int n = image.size();
        int m = image[0].size();
        int defVal = image[sr][sc];
        
        queue<pair<int,int> >q;
        
        q.push({sr,sc});
        distraction[sr][sc] = newColor;
        
        while(!q.empty()){
            auto u = q.front();
            q.pop();
            
            int dx[] = {-1, 0, +1, 0};
            int dy[] = {0, +1, 0, -1};
            
            for(int i = 0; i < 4; i++){
                int nrow = u.first + dx[i];
                int ncol = u.second + dy[i];
                
                if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && distraction[nrow][ncol] == defVal && distraction[nrow][ncol] != newColor){
                    distraction[nrow][ncol] = newColor;
                    q.push({nrow, ncol});
                }
            }
        }
    
        return distraction;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>image(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> image[i][j];
		}
		int sr, sc, newColor;
		cin >> sr >> sc >> newColor;
		Solution obj;
		vector<vector<int>> ans = obj.floodFill(image, sr, sc, newColor);
		for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code EndsAn image is represented by a 2-D array of integers, each integer represen