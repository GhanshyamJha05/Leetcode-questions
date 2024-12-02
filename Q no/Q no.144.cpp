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
    void preorderT(vector<int>&res,TreeNode *root)
    {
        if(root!=NULL){
            res.push_back(root->val);
            preorderT(res,root->left);
            preorderT(res,root->right); 
        }
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>res;
        preorderT(res,root);
        return res;
    }
};
