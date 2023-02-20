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
    void T(TreeNode* cur,vector<int>& v2){
        if(cur == NULL){
            return;
        }
        T(cur->left,v2);
        T(cur->right,v2);
        v2.push_back(cur->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> vec1;
        T(root, vec1);
        return vec1;
    }
};