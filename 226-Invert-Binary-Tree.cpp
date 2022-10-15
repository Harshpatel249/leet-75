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
    TreeNode* invertTree(TreeNode* root) {
        queue<TreeNode*> fifo;
        
        if(root == NULL){
            return NULL;
        }
        
        fifo.push(root);
        
        while(fifo.size()>0){
            TreeNode* curr = fifo.front();
            if(curr->left != NULL && curr->right != NULL){
                fifo.push(curr->left);
                fifo.push(curr->right);
                TreeNode* temp = curr->left;
                curr->left = curr->right;
                curr->right = temp;
                
            }else if(curr->left != NULL){
                fifo.push(curr->left);
                TreeNode* temp = curr->left;
                curr->left = curr->right;
                curr->right = temp;
            }else if(curr ->right != NULL){
                fifo.push(curr->right);
                TreeNode* temp = curr->right;
                curr->right = curr->left;
                curr->left = temp;
            }else{
                
            }
            fifo.pop();
        }
        
        return root;
    }
};