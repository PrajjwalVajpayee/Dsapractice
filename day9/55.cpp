 int speed = []() {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        return 0;
    }();
class Solution {
public:

    bool canJump(vector<int>& nums) {
       int p=0;
       for(auto i:nums){
        if(p<0) return false;
        else if(i>p) p=i;
         p--;
       }
       return true;
    }
};