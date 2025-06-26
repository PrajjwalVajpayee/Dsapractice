class Solution {
public:
    int helper(vector<int> nums, int k){
        int i=0,j=0;
        int count=0;
        int n=nums.size();
        unordered_map<int,int>mp;
        while(j<n){
          mp[nums[j]]++;
          while(i<=j && mp.size()>k){
            if(--mp[nums[i]] == 0) mp.erase(nums[i]);
            i++;
          }
          count+= j-i+1;
          j++;
       }
       return count;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return helper(nums,k) - helper(nums,k-1);
    }
};