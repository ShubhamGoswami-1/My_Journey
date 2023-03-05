//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:

    bool dfs(int source, int color, int V, vector<int>adj[], vector<int>& colored){
        
        colored[source] = color;
        
        for(int v : adj[source]){
            if(colored[v] == -1){
                if(!dfs(v, !color, V, adj, colored)){
                    return false;
                }
            }
            else if(colored[v] == color){
                return false;
            }
        }
        return true;
    }

	bool isBipartite(int V, vector<int>adj[]){
	    // Code here
	    vector<int>colored(V, -1);
	    for(int i = 0; i < V; i++){
	        if(colored[i] == -1){
	            if(!dfs(i, 0, V, adj, colored)){
	                return false;
	            }
	        }
	    }
	    
	    return true;
	}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isBipartite(V, adj);    
		if(ans)cout << "1\n";
		else cout << "0\n";  
	}
	return 0;
}
// } Driver Code Ends