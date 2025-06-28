class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
      priority_queue<pair<int,int>>pq;
       for(int i=0;i<nums.size();i++){
        pq.push({nums[i],i});

       }
       int t=0;
       vector<pair<int,int>> v;
       while(t!=k && !pq.empty()){
          v.push_back(pq.top());
          pq.pop();
          t++;
       } 
       sort(v.begin(),v.end(),[](auto& a, auto& b){
        return a.second < b.second;
       });
       vector<int> ans;
       for(auto i: v){
        ans.push_back(i.first);
       }
       return ans;
    }
};