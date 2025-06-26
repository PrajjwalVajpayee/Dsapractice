class Solution {
public:
    int longestSubsequence(string s, int k) {
       int count=0;
       int temp=0;
       int pow=1;
        for (char c : s) {
            if (c == '0') count++;
        }
       for(int i=s.size()-1;i>=0;i--){
        if(s[i] == '1'){
            if(pow<=k && temp+ pow<=k){
                temp+=pow;
                count++;
            }

        }
        if(pow>k) break;
        pow*=2;
       }
       return count;
    }
};