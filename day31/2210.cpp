 int ans = 0;

        for(int i = 1; i < nums.size() - 1; i++) {
            // Skip if current is same as previous or next
            if(nums[i] == nums[i - 1]) continue;

            // Find previous different value
            int prev = i - 1;
            while(prev >= 0 && nums[prev] == nums[i]) {
                prev--;
            }

            // Find next different value
            int next = i + 1;
            while(next < nums.size() && nums[next] == nums[i]) {
                next++;
            }

            // If either side is invalid, skip
            if(prev < 0 || next >= nums.size()) continue;

            // Check for hill or valley
            if((nums[i] > nums[prev] && nums[i] > nums[next]) || 
               (nums[i] < nums[prev] && nums[i] < nums[next])) {
                ans++;
            }
        }

        return ans;