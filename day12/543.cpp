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

    int help(TreeNode*root, int& h){
        if(root ==NULL){
            return NULL;
        }
        int l = help(root->left,h);
        int r= help(root->right,h);
        h= max(h,r+l);
        return 1+max(r,l);
    }
    int diameterOfBinaryTree(TreeNode* root) {
     int diameter=0;
    help(root,diameter);
     return diameter; 
    }
};