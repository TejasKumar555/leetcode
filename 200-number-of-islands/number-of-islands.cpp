class Solution {
public:
    void bfs(int r,int c,vector<vector<char>>&grid,vector<vector<int>>&vis)
    {
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<int,int>>q;
        q.push({r,c});
        vis[r][c]=1;
        int dr[4]={-1,0,1,0};
        int dc[4]={0,1,0,-1};
        while(!q.empty())
        {
            int r=q.front().first;
            int c=q.front().second;
            q.pop();

           
                for(int i=0;i<4;i++)
                {
                    int newr=r+dr[i];
                    int newc=c+dc[i];

                    if(newr>=0&&newr<n&&newc>=0&&newc<m&&grid[newr][newc]=='1'&&!vis[newr][newc]){
                        vis[newr][newc]=1;
                        q.push({newr,newc});
                    }
                }
            
        }
    }
    int numIslands(vector<vector<char>>& grid) {


        int n=grid.size();
        int m=grid[0].size();
        int cnt=0;
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int r=0;r<n;r++)
        {
            for(int c=0;c<m;c++)
            {
                if(grid[r][c]=='1'&&!vis[r][c])
                {
                    cnt++;
                    bfs(r,c,grid,vis);
                }
            }
        }

    return cnt;

        
    }
};