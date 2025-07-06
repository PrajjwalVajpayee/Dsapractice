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
  void in(TreeNode*root,vector<int> &ans){
    if(!root) return ;
    ans.push_back(root->val);
    in(root->left,ans);
    in(root->right,ans);
  }
    int kthSmallest(TreeNode* root, int k) {
       vector<int> ans;
        in(root,ans);
        sort(ans.begin(),ans.end());
        return ans[k-1];
    }
};