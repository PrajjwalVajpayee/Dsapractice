class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
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
};