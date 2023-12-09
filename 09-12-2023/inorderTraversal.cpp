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
    vector<int> inorderTraversal(TreeNode* root) {
        // if(root==NULL)
        // return {};
        // inorderTraversal(root->left);
        // temp.push_back(root->val);
        // inorderTraversal(root->right);

        // return temp;
        vector<int> temp;
        stack<TreeNode*> st;

        while(root || !st.empty()) {
            while(root) {
                st.push(root);
                root = root->left;
            }
            root = st.top();
            temp.push_back(root->val);
            st.pop();
            root = root->right;
        }
        return temp;
    }
};
