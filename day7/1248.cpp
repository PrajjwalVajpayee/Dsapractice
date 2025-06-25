class Solution {
public:
    int helper(vector<int>& nums, int goal) {
       unordered_map<int,int>mp;
       mp[0]=1;
       int sum=0, ans=0;
       for(auto i: nums){
        sum +=i;
        ans+=mp[sum-goal];
        mp[sum]++;
       }
       return ans;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        ios::sync_with_stdio(NULL);
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2 == 0){
                nums[i]=0;
            }else{
                nums[i]=1;
            }

        }
     int ans = helper(nums,k);
     return ans;
    }
};
