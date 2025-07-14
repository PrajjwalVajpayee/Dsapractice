vector<int>bfs(int s, vector<int>adj[]){
    vector<int>vis(0);
    vector<int> ans;
    queue<int>q;
    q.push(s);
    vis[s]=1;
    while(!q.empty()){
       int node= q.front();
       q.pop();
       ans.push_back(node);
       for(auto i:adj[node]){
       if(!vis[i]){
        vis[i]=1;
        q.push(i);
       }
       }
    }

}