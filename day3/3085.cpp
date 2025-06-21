class Solution {
public:
    int minimumDeletions(string s, int k) {
       vector<int> v(26,0);
       for(auto i: s){
          v[i-'a']++;
       }
       sort(v.begin(),v.end());
       int l=0;
       while(v[l] == 0) {l++;}
       int ans=INT_MAX;
       int n= v.size();

       for(int i=l;i<n;i++){
         int range = v[i]+k;
          int p=v[i];
          for(int j=i+1;j<n;j++){
            if(v[j] > range){p+=range;}
            else{
                p+=v[j];
            }
          }
          int rem = s.size()- p;
          ans= min(ans,rem);
       }
     return ans;
    }
};