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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if(root == nullptr){
            return res;
        }
        queue<TreeNode* > q1;
        q1.push(root);
        while(!q1.empty()){
            vector<int> res2;
            int n = q1.size();
            for(int i = 0; i < n; i++){
                TreeNode* node = q1.front();
                res2.push_back(node->val);
                if(node->left){
                    q1.push(node->left);
                }
                if(node->right){
                    q1.push(node->right);
                }
                q1.pop();
            }
            res.push_back(res2);
        }
        return res;
    }
};