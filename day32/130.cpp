class Solution {
public:

void dfs(int i, int j, vector<vector<char>>&board,vector<vector<int>>&vis,vector<int>row,vector<int>col){
    vis[i][j] =1;
    cout << "Visiting: " << i << "," << j << endl;

    int n = board.size();
    int m = board[0].size();
    for(int x = 0;x<4;x++){
        int r= i+row[x];
        int c = j+col[x];
        if(r>=0 && c>=0 && r<n && c<m && !vis[r][c] && board[r][c] == 'O'){
            dfs(r,c,board,vis,row,col);
        }
    }
}
    void solve(vector<vector<char>>& board) {
        vector<int> row = {-1, 0, 1, 0};
        vector<int> col = {0, 1, 0, -1};
        int n = board.size();
        int m = board[0].size();
        vector<vector<int>> vis(n, vector<int>(m));
        //  row ko dhekho
        for (int j = 0; j < m; j++) {
            if (!vis[0][j] && board[0][j] == 'O') {
                dfs(0, j, board, vis, row, col);
            }
            if (!vis[n - 1][j] && board[n - 1][j] == 'O') {
                dfs(n - 1, j, board, vis, row, col);
            }
        }
        // col ko dhekho
        for (int i = 0; i < n; i++) {
            if (!vis[i][0] && board[i][0] == 'O') {
                dfs(i, 0, board, vis, row, col);
            }
            if (!vis[i][m - 1] && board[i][m - 1] == 'O') {
                dfs(i, m - 1, board, vis, row, col);
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && board[i][j] == 'O'){
                    board[i][j] = 'X';
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<< board[i][j]<<" ";
            }
            cout<<endl;
        }
    }
};