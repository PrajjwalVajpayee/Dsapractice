class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int sum = 0;
        int l=0,r;
        int maxi=0;
        unordered_set<int>s;
        for(r=0;r<nums.size();r++){
            while(s.find(nums[r])!=s.end()){
                sum-=nums[l];
                s.erase(nums[l]);
                l++;
            }
            sum+=nums[r];
            s.insert(nums[r]);
            maxi = max(sum,maxi);
        }
        return maxi;
    }
};