bool detect(vector<int>adj[],int src,vector<int>&vis){
    queue<pair<int,int>>q;
    q.push({src,-1});
    vis[src]=1;
    while(!q.empty()){
        int node = q.front().first;
        int parent = q.front().second;
        q.pop();
        
        for(auto i:adj[node]){
           if(!vis[i]){
            vis[i] = 1;
            q.push({i,node});
           }
           else if(parent != i) return true;
        }
        
    }
    return false;
};

bool isCycle(vector<int>adj[],int v){
    vector<int> vis(v,0);
    for(int i=0;i<v;i++){
        if(!vis[i]){
           if(detect(adj,i,vis)) return true;
        }
    }
    return false;
};
