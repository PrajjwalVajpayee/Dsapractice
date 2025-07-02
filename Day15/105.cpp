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
    int findposition(vector<int> in, int element, int n)
    {
        for (int i = 0; i < n; i++)
        {
            if (in[i] == element)
                return i;
        }
        return -1;
    }
       TreeNode *solve(vector<int>pre, vector<int>in, int &index, int inorderstart, int inorderend, int n){
            if(index>=n || inorderstart>inorderend){
                return NULL;
            }
            int element=pre[index++];
            TreeNode*root=new TreeNode(element);
             int position = findposition(in, element, n);

        root->left = solve(pre, in, index, inorderstart, position - 1, n);
        root->right = solve(pre, in, index, position + 1, inorderend, n);
        return root;
       }
    TreeNode* buildTree(vector<int>& pre, vector<int>& in) {
       int n=in.size();
       int preorderindex=0;
       TreeNode *ans=solve(pre,in,preorderindex,0,n-1,n);
       return ans;
    }
};
