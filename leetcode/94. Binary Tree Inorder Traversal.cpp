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
    void T(TreeNode* cur, vector<int>& v1){
        if(cur == NULL){
            return;
        }
        T(cur->left,v1);
        v1.push_back(cur->val);
        T(cur->right,v1);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        T(root,result);
        return result;
    }
};