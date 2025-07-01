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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        ios::sync_with_stdio(NULL);
        cin.tie(NULL);
        if(p == NULL && q == NULL) return true;
        if( p!=NULL && q==NULL) return false;
        if( p== NULL && q!=NULL) return false;
         bool l= isSameTree(p->left,q->left);
         bool r= isSameTree(p->right,q->right);
         bool v= p->val == q->val;
         if( v && l && r)
         return true;
         else return false;
       }     
};