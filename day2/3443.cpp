class Solution {
public:
    int maxDistance(string p, int k) {
      int ans=0, e=0,w=0,n=0,s=0;
      for(auto i=0;i<p.size();i++){
        char c = p[i];
        if(c == 'E') e++;
        else if(c == 'W') w++;
        else if(c == 'N') n++;
        else if(c == 'S')s++;

        int x = abs(e-w);
        int y=abs(n-s);
        int dis= x+y;
        int ch =dis + min(2*k, i+1-dis);
        ans = max(ans, ch); 
      }  
      return ans;
    }
};