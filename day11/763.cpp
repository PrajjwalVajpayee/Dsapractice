class Solution {
public:
    vector<int> partitionLabels(string s) {
      map<char,int>mp;
      for(int i=0;i<s.size();i++){
        mp[s[i]]=i;
      }  
      vector<int> ans;
      int p=0;int e=0;
      for(int i=0;i<s.size();i++){
      e= max(e,mp[s[i]]);
      if(e==i){
        ans.push_back(e-p+1);
        p=i+1;
      }

      }
      return ans;
    }
};