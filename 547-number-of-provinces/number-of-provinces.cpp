class Solution {
public:
    void dfs(int node, vector<vector<int>>& adjls, vector<int>& vis) {
        vis[node] = 1;
        for (auto it : adjls[node]) {
            if (!vis[it])
                dfs(it, adjls, vis);
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        int V = isConnected.size();  // Number of nodes
        vector<vector<int>> adjls(V); // Use vector instead of VLAs

        // Convert adjacency matrix to adjacency list
        for (int i = 0; i < V; i++) { // 0-based indexing
            for (int j = 0; j < V; j++) {
                if (isConnected[i][j] == 1 && i != j) {
                    adjls[i].push_back(j);
                    adjls[j].push_back(i);
                }
            }
        }

        vector<int> vis(V, 0); // Use vector instead of array
        int cnt = 0;

        for (int i = 0; i < V; i++) { // 0-based indexing
            if (!vis[i]) {
                cnt++;
                dfs(i, adjls, vis);
            }
        }
        return cnt;
    }
};
