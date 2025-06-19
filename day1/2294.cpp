#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int cnt = 0;
        int i = 0, j = 0;
        while (i < nums.size() && j < nums.size()) {
            if (nums[j] - nums[i] <= k) {
                j++;
            } else {
                cnt++;
                i = j;
            }
        }
        if (i < nums.size()) cnt++;

        return cnt;
    }
};