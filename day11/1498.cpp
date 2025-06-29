class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
       sort(nums.begin(),nums.end());
       int n=nums.size();
       int mod= 1e9+7;
       vector<int>v(n,1);
       for(int i=1;i<nums.size();i++){
          v[i]= (v[i-1]*2)%mod;
       } 
       int l=0,r=n-1;int ans=0;
       while(l<=r){
        if(nums[l]+nums[r] <= target){
            ans= (ans+v[r-l])%mod;
            l++;
        }else{
            r--;
        }

       }
       return ans;
    }
};