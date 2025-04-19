class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        
      if(grid.empty()) return 0;
        
        int n = grid.size();
        int m = grid[0].size();
        
        vector<vector<int>> vis(n, vector<int>(m, 0));
        queue<pair<pair<int, int>, int>> q;
        
        int cntf = 0;
        int cnt = 0;
        int tm = 0;

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(grid[i][j] == 2) {
                    q.push({{i, j}, 0});
                    vis[i][j] = 2;
                } else {
                    vis[i][j] = 0;
                }

                if(grid[i][j] == 1) cntf++;
            }
        }

        int delr[4] = {-1, 0, 1, 0};
        int delc[4] = {0, 1, 0, -1};

        while(!q.empty()) {
            int r = q.front().first.first;
            int c = q.front().first.second;
            int t = q.front().second;
            tm = max(tm, t);
            q.pop();

            for(int i = 0; i < 4; i++) {
                int nr = r + delr[i];
                int nc = c + delc[i];

                if(nr >= 0 && nr < n && nc >= 0 && nc < m && vis[nr][nc] != 2 && grid[nr][nc] == 1) {
                    q.push({{nr, nc}, t + 1});
                    vis[nr][nc] = 2;
                    cnt++;
                }
            }
        }

        if(cnt != cntf) return -1;
        return tm;
    }
};