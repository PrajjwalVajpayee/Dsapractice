#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left, *right;
    TreeNode(int x): val(x), left(NULL), right(NULL) {}
};

// 🛠️ Step 1: Create parent map
void markParents(TreeNode* root, unordered_map<TreeNode*, TreeNode*>& parent) {
    queue<TreeNode*> q;
    q.push(root);
    
    while (!q.empty()) {
        TreeNode* curr = q.front(); q.pop();
        
        if (curr->left) {
            parent[curr->left] = curr;
            q.push(curr->left);
        }
        if (curr->right) {
            parent[curr->right] = curr;
            q.push(curr->right);
        }
    }
}

// 🔥 Step 2: BFS from target
vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
    unordered_map<TreeNode*, TreeNode*> parent;
    markParents(root, parent); // 👆 get parent map

    unordered_set<TreeNode*> visited;
    queue<TreeNode*> q;
    q.push(target);
    visited.insert(target);

    int curr_level = 0;

    while (!q.empty()) {
        int size = q.size();
        if (curr_level == k) break;

        for (int i = 0; i < size; i++) {
            TreeNode* node = q.front(); q.pop();

            if (node->left && !visited.count(node->left)) {
                visited.insert(node->left);
                q.push(node->left);
            }
            if (node->right && !visited.count(node->right)) {
                visited.insert(node->right);
                q.push(node->right);
            }
            if (parent[node] && !visited.count(parent[node])) {
                visited.insert(parent[node]);
                q.push(parent[node]);
            }
        }
        curr_level++;
    }

    vector<int> result;
    while (!q.empty()) {
        result.push_back(q.front()->val);
        q.pop();
    }

    return result;
}
