class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int>res;
        queue<TreeNode*>q;
        if(!root) return res;
        q.push(root);
        while(!q.empty()){
            res.push_back(q.back()->val);
            for(int i = q.size(); i>0;i--){
                TreeNode* node = q.front();
                q.pop();
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
        }
        return res;

    }
};
