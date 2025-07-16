class Solution {
public:
     void dfs(vector<vector<int>>&v,int color,int sr,int sc,int n,int m,int val){
        if(sr<0 || sr>=n || sc<0 || sc>=m || v[sr][sc]!=val || v[sr][sc] == color ) return ;
        v[sr][sc] = color;
        dfs(v,color,sr+1,sc,n,m,val);
        dfs(v,color,sr-1,sc,n,m,val);
        dfs(v,color,sr,sc+1,n,m,val);
        dfs(v,color,sr,sc-1,n,m,val);
     }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n= image.size();
        int m= image[0].size();
        int val = image[sr][sc];
        dfs(image,color,sr,sc,n,m,val);
        return image;

    }
};