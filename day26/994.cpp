class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
       queue<pair<int,int>>q;
       vector<vector<int>>vis=grid;
       int n=grid.size();
       int m = grid[0].size();
       int f_count=0;
       for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j] == 2){
                q.push({i,j});
            }
            if(grid[i][j] == 1)f_count++;
        }

       }
       if(f_count==0) return 0;
       if(q.empty()) return -1;
       int ans=-1;
       vector<pair<int,int>>dir={{1,0},{-1,0},{0,1},{0,-1}};
       while(!q.empty()){
       int size =q.size();
          while(size--){
            auto [x,y] = q.front();
            q.pop();
            for(auto [dx,dy]:dir){
                int i = x+dx;
                int j= y+dy;
                if( i>=0 && i<n && j>=0 && j<m && vis[i][j] == 1){
                    vis[i][j] =2;
                    f_count--;
                    q.push({i,j});
                }
            } 
          }
          ans++;
       }
       if(f_count == 0) return ans;
       return -1;
    }
};