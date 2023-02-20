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
    void Traversal(TreeNode* cur, vector<int>& vec){
        if(cur == NULL){
            return;
        }
        vec.push_back(cur->val);
        Traversal(cur->left,vec);
        Traversal(cur->right,vec);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;
        Traversal(root,result);
        return result;
    }
};