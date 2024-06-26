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
    vector<int> sorted;
    void inorderTraversal(TreeNode* root) {
        if(!root) return;
        if(root->left)
        inorderTraversal(root->left);
        sorted.push_back(root->val);
        if(root->right)
        inorderTraversal(root->right);
    }
    TreeNode* balance(int l, int r) {
        int m = l+(r-l)/2;
        if(l>r) return NULL;
        TreeNode* left = balance(l, m-1);
        TreeNode* right = balance(m+1, r);

        return new TreeNode(sorted[m], left, right);
    }
    TreeNode* balanceBST(TreeNode* root) {
        inorderTraversal(root);
        return balance(0, sorted.size()-1);
    }
};
