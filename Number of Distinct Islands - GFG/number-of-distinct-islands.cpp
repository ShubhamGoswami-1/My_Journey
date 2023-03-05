//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  
    void bfs(int row, int col, vector<vector<int> >&grid, vector<vector<bool> >&visited, set<vector<pair<int,int> > >&res){
        
        int n = grid.size();
        int m = grid[0].size();
        
        visited[row][col] = true;
        vector<pair<int,int> >temp;
        
        queue<pair<int,int> >q;
        q.push({row, col});
        
        int dx[] = {-1, 0, +1, 0};
        int dy[] = {0, +1, 0, -1};
        
        while(!q.empty()){
            auto u = q.front();
            q.pop();
            temp.push_back({row - u.first, col - u.second});
            
            for(int i = 0; i < 4; i++){
                
                int nrow = u.first + dx[i];
                int ncol = u.second + dy[i];
            
                if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && !visited[nrow][ncol] && grid[nrow][ncol] == 1){
                    visited[nrow][ncol] = true;
                    q.push({nrow, ncol});
                }
            }
        }
        res.insert(temp);
    }
  
    int countDistinctIslands(vector<vector<int>>& grid) {
        // code here
        
        int n = grid.size();
        int m = grid[0].size();
        
        vector<vector<bool> >visited(n, vector<bool>(m, false));
        set<vector<pair<int,int> > >res;
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == 1 && !visited[i][j]){
                    bfs(i, j, grid, visited, res);
                }
            }
        }
        
        return res.size();
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.countDistinctIslands(grid) << endl;
    }
}
// } Driver Code Ends