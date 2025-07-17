class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        if(mat.empty() || mat[0].empty()){
            return {};
        }
        int n= mat.size();
        int m = mat[0].size();
        int maxi = m*n;
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j] == 0){
                  q.push({i,j});
                }
               else{
                mat[i][j] = maxi;
               } 
            }
        }

       
       vector<pair<int,int>>dir = {{1,0},{-1,0},{0,1},{0,-1}};
        while(!q.empty()){
            auto [x,y] = q.front();q.pop();
            for(auto [i,j]:dir){
                int r = x+i;
                int c=j+y;
                if(r>=0 && r<n && c>=0 && c<m && mat[r][c] > mat[x][y] +1){
                    q.push({r,c});
                    mat[r][c] = mat[x][y]+1;
                }
            }
        }
        return mat;
    }
};