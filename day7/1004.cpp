class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
     int l=0;
     for(int i=0;i<nums.size();i++){
        if(nums[i] == 0){
            k--;
        }
        if(k< 0){
            if(nums[l] == 0){
                k++;
            }
            l++;
        }
     }
     return nums.size()-l;
    }
};