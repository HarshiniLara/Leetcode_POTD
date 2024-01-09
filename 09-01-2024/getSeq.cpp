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
    void getSeq(TreeNode* root, vector<int>& temp) {
        if(!root)
        return;
        if(!root->left && !root->right)
        temp.push_back(root->val);
        getSeq(root->left, temp);
        getSeq(root->right, temp);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> l1, l2;
        getSeq(root1, l1);
        getSeq(root2, l2);
        return l1==l2;
    }
};
