class Solution {
public:
    bool checkValidString(string s) {
       stack<char> st;
      int a=0,b=0;
     for(int i=0;i<s.size();i++){
        if(s[i] == '('){
            a++;
            b++;
        }else if(s[i] == ')'){
            a--;
            b--;
        }
        else{
            a--; b++;
        }
        if(b<0) return false;
        if(a<0) a=0;
     }
     if(a== 0) return true;
     return false;
    }
};