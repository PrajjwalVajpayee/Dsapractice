bool dfs(int node, int parent, vector<int>vis, vector<int>adj[]){
    vis[node] = 1;
    for(auto i:adj[node]){
        if(!vis[i]){
            if(detect(i,node,vis,adj) == true) return true;
        }
        else if(i != parent) return true;
    }
    return false;
};

bool isCycle(int v, vector<int> &adj[]){
    vector<int>vis(v,0);
    for(int i=0;i<v;i++){
        if(!vis[i]){
            if(dfs(i,-1,vis,adj) == true) return true;
        }
    }
    return false;
}