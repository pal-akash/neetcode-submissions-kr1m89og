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
    vector<vector<int>> res;
    vector<vector<int>> levelOrder(TreeNode* root) {
        levelOrderDFS(root, 0);
        return res;
    }

    void levelOrderDFS(TreeNode* node, int depth){
        if(!node) return;
        if(res.size() == depth){
            res.push_back(vector<int>());
        }
        res[depth].push_back(node->val);
        levelOrderDFS(node->left, depth + 1);
        levelOrderDFS(node->right, depth + 1);
    }
};
