class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& g, vector<int>& s) {
         int cookiesize=s.size();
       if(cookiesize==0) return 0;
       int max=0;
       int index_c=g.size()-1;
       int index_co=s.size()-1;
       sort(s.begin(),s.end());
       sort(g.begin(),g.end());
       while(index_c>=0 && index_co>=0){
           if(s[index_co]>=g[index_c]){
               max++;
               index_c--;
               index_co--;
           }
           else{
               index_c--;
           }
       } 
       return max;
    }
};