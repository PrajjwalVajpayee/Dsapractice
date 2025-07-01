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
     int help(TreeNode*root,int& s){
        if(root == NULL) return 0;
        int l = max(0,help(root->left,s));
        int r= max(0,help(root->right,s));
        s = max(s,l+r+root->val);
        return root->val+max(l,r);
     }
    int maxPathSum(TreeNode* root) {
        int sum =INT_MIN;
        help(root,sum);
        return sum;
    }
};