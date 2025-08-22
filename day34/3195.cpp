class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int m= grid.size();int n= grid[0].size();
        vector<pair<int,int>>h;
        int minrow=m,maxrow=-1,mincol=n,maxcol=-1;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j] == 1){
                  minrow = min(i,minrow);
                  maxrow=max(i,maxrow);
                  mincol = min(j,mincol);
                  maxcol =  max(j,maxcol);           
                }
            }

        }
        if(maxrow == -1) return -1;
        else return (maxrow - minrow +1)*(maxcol - mincol+1);
    }
};