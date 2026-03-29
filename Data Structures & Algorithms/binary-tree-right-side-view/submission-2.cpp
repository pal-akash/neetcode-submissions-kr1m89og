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
    void dfsRight(TreeNode* node, vector<int>& ans, int depth){
        if(!node) return;
        if(ans.size() == depth){
            ans.push_back(node->val);
        }
        dfsRight(node->right, ans, depth + 1);
        dfsRight(node->left, ans, depth + 1);
    }
public:
    vector<int> rightSideView(TreeNode* root) {
        if(!root) return {};
        vector<int> ans;
        dfsRight(root, ans, 0);
        return ans;
    }
};
