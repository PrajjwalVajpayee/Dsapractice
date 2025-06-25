class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
       int total = accumulate(nums.begin(),nums.end(),0);
       int n= nums.size();
       int w= n-k;
      
       int curr = accumulate(nums.begin(),nums.begin()+w,0);
       int ans=total-curr;
       for(int i=w;i<n;i++){
        curr+=nums[i]- nums[i-w];
        ans= max(ans,total - curr);
       }
       return ans;
    }
};