class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> v;
        int p= s.size()%k;
        if(p!=0){
            int add = k-p;
            s+=string(add,fill);
        }
        for(int i=0;i<s.size();i+=k){
            v.push_back(s.substr(i,k));
        }
        return v;
    }
};