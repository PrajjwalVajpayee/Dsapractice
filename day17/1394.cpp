class Solution {
public:
    int findLucky(vector<int>& arr) {
      map<int,int> mp;
      for(auto i:arr){
        mp[i]++;
      }  
      for(auto i:mp){
        cout<<i.first<<":"<<i.second<<" ";
      }
      int ans=0;
      for(auto i:mp){
    
        if(i.first == i.second){
            ans= max(ans,i.first);
        } 
      }
      return ans>0 ? ans:-1;
    }
};