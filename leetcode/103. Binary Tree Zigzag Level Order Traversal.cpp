class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if(root == nullptr){
            return res;
        }
        int level = 1;
        queue<TreeNode* > q;
        q.push(root);
        while(!q.empty()){
            level++;
            vector<int> cur;
            int n = q.size();
            for(int i = 0; i < n; i++){
                TreeNode* node = q.front();
                cur.push_back(node -> val);
                if(node->left){
                    q.push(node->left);
                }
                if(node->right){
                    q.push(node->right);
                }
            q.pop();
            }
            if(level%2 != 0){
                reverse(cur.begin(),cur.end());
            }
            res.push_back(cur);   
        }
        return res;
    }
};