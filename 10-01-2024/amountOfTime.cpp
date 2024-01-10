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
    int time = 0;
    int dfs(TreeNode*root, int start) {
        int depth = 0;
        if(!root)
        return depth;
        int leftDepth = dfs(root->left, start);
        int rightDepth = dfs(root->right, start);
        if(root->val==start) {
            time = max(leftDepth, rightDepth);
            depth = -1;
        }
        else if(leftDepth>=0 && rightDepth>=0) 
        depth = max(leftDepth, rightDepth)+1;
        else {
            int temp = abs(leftDepth)+abs(rightDepth);
            time = max(time, temp);
            depth = min(leftDepth, rightDepth)-1;
        }
        return depth;
    }
    int amountOfTime(TreeNode* root, int start) {
        dfs(root, start);
        return time;
    }
};
