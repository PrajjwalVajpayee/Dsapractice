class Solution {
public:
    int possibleStringCount(string word) {
        int count=word.size();
        for(int i=1;i<word.size();i++){
            if(word[i]!=word[i-1]){
                count--;
            }
        }
        return count;
    }
};