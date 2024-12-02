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
    void inorder_traversal(vector<int> &result,TreeNode *root)
    {
        if(root!=NULL)
        {
            inorder_traversal(result,root->left);
            result.push_back(root->val);
            inorder_traversal(result,root->right);
        }
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        inorder_traversal(result,root);
        return result;
    }
};
