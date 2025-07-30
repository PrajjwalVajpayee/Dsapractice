class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxi=*max_element(nums.begin(),nums.end());
        int ans=0;
        int curr=0;
        for(auto i:nums){
            if(i == maxi){
                curr++;
            }else{
                ans = max(curr,ans);
                curr=0;
            }
        }
        ans = max(curr,ans);
        return ans;
    }
};