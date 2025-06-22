class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
      vector<vector<int>>v;
      int a=0,b=0;
      while(b<s.size()){
        while(b<s.size() && s[b] == s[a]){
            b++;
        }
        if(b-a>=3){
           v.push_back({a,b-1});
        }
        a=b;
      }
      return v;
    }
};