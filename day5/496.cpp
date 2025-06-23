class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
      vector<int>ans;
      int cnt=0;
      for(int i=0;i<nums1.size();i++){
        for(int j=0;j<nums2.size();j++){
            if(nums1[i] == nums2[j]){
                cnt=1;
            }
            if(cnt == 1){
                if(nums1[i] < nums2[j]){
                    ans.push_back(nums2[j]);
                    cnt=0;
                }else if(j ==  nums2.size()-1){
                       ans.push_back(-1);
                       cnt=0;
                }
            }
        }
      }
      return ans;
    }
};