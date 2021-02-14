class Solution {
public:
    int height(TreeNode* root){
        if(root == NULL) return 0;
        int left = height(root->left);
        int right = height(root->right);
        if(left == -1 || right == -1 || abs(left - right) >1) return -1;
        return max(left,right)+1;
    }
    bool isBalanced(TreeNode* root) {
        return height(root) != -1;

    }
};
