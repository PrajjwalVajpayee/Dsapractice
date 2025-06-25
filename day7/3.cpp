class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      if(s.size() < 2) return s.size();
      int ans=0;
      int l=0;
      unordered_set<int> st;
      for(int i=0;i<s.size();i++){
        while(st.find(s[i]) != st.end()){
            st.erase(s[l]);
            l++;
        }
        st.insert(s[i]);
        ans = max(ans, i-l+1);
      }
       return ans;
    }
};