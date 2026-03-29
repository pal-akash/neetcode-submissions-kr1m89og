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
    int helper(TreeNode* node, int prev){
        if(!node) return 0;
        if(node->val >= prev){
            return 1 + helper(node->left, node->val) + helper(node->right, node->val);
        }else{
            return helper(node->left, prev) + helper(node->right, prev);
        }
    }
public:
    int goodNodes(TreeNode* root) {
        return helper(root, INT_MIN);
    }
};
