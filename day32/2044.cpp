class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        int n = nums.size();
        int total = 1 << n;
        int ans = 0;
        int count;
        for (int i = 0; i < total; i++) {
            int curr = 0;
            for (int j = 0; j < n; j++) {
                if ((i >> j) & 1) {
                    curr |= nums[j];
                }
            }
            if (curr > ans) {
                ans = curr;
                count = 1;
            } else if (curr == ans) {
                count++;
            }
        }
        return count;
    }
};