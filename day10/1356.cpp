class Solution {
public:
     int cnt(int n){
        int count=0;
        while(n > 0){
            if(n & 1){
                count++;
            }
            n>>=1;
        }
        return count;
     }
    vector<int> sortByBits(vector<int>& arr) {
         vector<pair<int,int>> v;
         for(auto i:arr){
            int p= cnt(i);
            v.push_back({p,i});
         }
         sort(v.begin(),v.end());
         vector<int> ans;
         for(auto i: v){
            ans.push_back(i.second);
         }
         return ans;
    }
};