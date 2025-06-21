class Solution {
public:
    int minDeletions(string s) {
       vector<int> v(26,0);
       for(auto i:s){
        v[i-'a']++;
       }
       sort(v.begin(),v.end(),greater<int>());
       int ans=0;
       for(int i=1;i<26;i++){
        while(v[i]!=0 && v[i] >= v[i-1]){
            v[i]--;
            ans++;
        }
       }
       return ans;
    }
};