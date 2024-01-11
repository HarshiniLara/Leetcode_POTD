/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int v = 0;
    void dfs(TreeNode* root, int maxVal, int minVal) {
        if(!root)
        return;
        maxVal = max(maxVal, root->val);
        minVal = min(minVal, root->val);
        v = max(v, maxVal-minVal);
        dfs(root->left, maxVal, minVal);
        dfs(root->right, maxVal, minVal);    
    }
    int maxAncestorDiff(TreeNode* root) {
        dfs(root, root->val, root->val);
        return v;
    }
};
