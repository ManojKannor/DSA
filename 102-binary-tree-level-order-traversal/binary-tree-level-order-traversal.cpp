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
        queue<TreeNode*> q;
        vector<vector<int>> ans;
        if(root == NULL){
            return ans;
        }
        
        vector<int> row;
        q.push(root);
        bool isAccess = false;

        while(!q.empty()){
            int size = q.size();

            for(int i=0;i<size;i++){
                TreeNode* curr = q.front();
                q.pop();

                row.push_back(curr->val);

                if(curr->left != NULL){
                    q.push(curr->left);
                }

                if(curr->right != NULL){
                    q.push(curr->right);
                }
            }
            ans.push_back(row);
            row.clear();
        }
        return ans;
    }
};