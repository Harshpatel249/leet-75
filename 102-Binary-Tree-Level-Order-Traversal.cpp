class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        vector<vector<int>> ans;
        
        if(root==nullptr) return ans;
        q.push(root);
        
        while(!q.empty()){
            int n=q.size();
            vector<int> level;
            
            for(int i=0;i<n;i++){
                TreeNode* curr=q.front();
                q.pop();
                
                level.push_back(curr->val);
                
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
            ans.push_back(level);
        }
        return ans;
    }
};