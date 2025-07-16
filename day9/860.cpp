class Solution {
public:
    bool lemonadeChange(vector<int>& b) {
         ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
         int a=0;int c=0;
         for(int i=0;i<b.size();i++){
            if(b[i] == 5 ){
                a++;
            }
            else if(b[i] == 10){
                c++;
                a--;
            }
            else {
                if(c>0){
                    c--;
                    a--;
                }else{
                    a-=3;
                }
           
            }
             if(a<0 ||c<0 ) return false;

         }
         
         return true;
    }
};
