class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        
        stack<int> st;
        for(int i=0;i<a.size();i++){
            if(a[i] >0){
                st.push(a[i]);
            }else{
                while(!st.empty() && st.top() > 0 && st.top() <  abs(a[i])){
                    st.pop();
                }
                if(!st.empty() && st.top() ==  abs(a[i])) st.pop();
                else if(st.empty() || st.top() < 0)  st.push(a[i]);
            }
        }
        vector<int> v;
        while(!st.empty()){
            v.push_back(st.top());
            st.pop();
        }
        reverse(v.begin(), v.end());
        return v;
    }
};