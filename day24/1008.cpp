/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int find(vector<int> &in,int k){
         for(int i=0;i<in.size();i++){
            if(in[i] == k)return i;
         }
         return -1;
    }
    TreeNode*solve(vector<int>&pre,vector<int>&in, int &ind,int start,int end, int n){
        if(ind >= n || start >end){
            return NULL;

        }
        int element = pre[ind++];
        TreeNode*ans = new TreeNode(element);
        int pos = find(in,element);
        ans->left = solve(pre,in,ind,start,pos-1,n);
        ans->right = solve(pre,in,ind,pos+1,end,n);
        return ans;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
       
      vector<int> in(preorder.begin(),preorder.end());
       sort(in.begin(),in.end());
       int n = preorder.size();
       int ind=0;
       TreeNode*ans = solve(preorder,in,ind,0,n-1,n);
       return ans;
    }
};