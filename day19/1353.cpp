class Solution {
public:
    int maxEvents(vector<vector<int>>& events) {
      sort(events.begin(),events.end());
      priority_queue<int,vector<int>,greater<int>> pq;
      int day=0;
      int n= events.size();
      int ans=0;
      int last=0;
      for(auto i:events){
        last = max(last,i[1]);
      } 
      for(int i=1;i<=last;i++){
        while(day < n && events[day][0] == i){
            pq.push(events[day][1]);
            day++;
        }
        while(!pq.empty() && pq.top() < i){
            pq.pop();
        }
        if(!pq.empty()){
           pq.pop();
           ans++;
        }
        if( day ==  n && pq.empty() ){
            break;
        }
      }
      return ans;
    }
};