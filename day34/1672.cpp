class Solution {
public:
    int maximumWealth(vector<vector<int>>& a) {
        int ans=0;
        for(auto i:a){
            ans = max(ans, accumulate(i.begin(),i.end(),0));
        }
        return ans;
    }
};