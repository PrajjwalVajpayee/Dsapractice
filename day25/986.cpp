class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& f, vector<vector<int>>& s) {
        vector<vector<int>> v;
        int a=0,b=0;
       while(a<f.size() && b<s.size()){
        int p= max(f[a][0], s[b][0]);
        int q = min (f[a][1],s[b][1]);
        if(q>=p){
            v.push_back({p,q});
        }
        if(f[a][1]==q)a++;
        if(s[b][1] ==q)b++;
       } 
       return v;
    }
};