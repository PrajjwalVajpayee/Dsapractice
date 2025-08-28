class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
      int m= grid.size(); int n = grid[0].size();
      unordered_map<int,priority_queue<int>>maxi;
      unordered_map<int,priority_queue<int,vector<int>,greater<int>>>mini;
      for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            int k = i-j;
            if(k>=0){
                maxi[k].push(grid[i][j]);
            } else{
                mini[k].push(grid[i][j]);
            }
        }

      } 
       for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            int k=i-j;
            if(k >=0){
                grid[i][j] =maxi[k].top();
                maxi[k].pop(); 
            }else{
                grid[i][j] = mini[k].top();
                mini[k].pop();
            }
        }
       }
       return grid;
    }
};