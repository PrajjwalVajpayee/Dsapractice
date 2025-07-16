class Solution {
public:
    bool isValid(string word) {
        if(word.size()<3) return false;
       int v_cnt=0;
       int co_cnt=0;
       int n_cnt=0;
       for(auto i: word){
        if(!isalnum(i))return false;
        else if(isalpha(i)){
            char c = tolower(i);
            if(c == 'a' || c == 'e' || c=='i' || c == 'o' || c=='u') v_cnt++;
            else co_cnt++;
        }
       }
       cout<<v_cnt<<":"<<co_cnt; 
       return v_cnt && co_cnt;
    }
};