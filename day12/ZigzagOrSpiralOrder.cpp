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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if (!root) return {};

        queue<TreeNode*> q;
        vector<vector<int>> out;

        q.push(root);
        int level = 0; /* to alternate levels, or a bool variable */

        while (!q.empty()) {

            int sz = q.size();
            vector<int> curr(sz);

            for (int i = 0; i < sz; i++) {

                TreeNode* tmp = q.front();
                q.pop();

                if (level == 0) {
                    curr[i] = tmp->val; // odd level, insert like 0, 1, 2, 3 etc.
                } else {
                    curr[sz - i - 1] = tmp->val; /* even level insert from end. 3, 2, 1, 0. (sz - i - 1) to get the index from end */
                }
                if (tmp->left) q.push(tmp->left);
                if (tmp->right) q.push(tmp->right);
            }
            out.push_back(curr); // now push the level traversed to output vector
            level = !level; // toggle the level using negation. or level == 0 ? level = 1 : level = 0;
        }
        return out;
    }
};


//using stacks

vector<vector<int> > Solution::zigzagLevelOrder(TreeNode* A) {
    vector<int>vec;
    vector<vector<int>>sol;
    stack<TreeNode*>s1;
    stack<TreeNode*>s2;
    s1.push(A);

    while(!s1.empty()||!s2.empty())
    {
        while(!s1.empty())
        {

            vec.push_back(s1.top()->val);
            if(s1.top()->left!=NULL)
                s2.push(s1.top()->left);
            if(s1.top()->right!=NULL)
                s2.push(s1.top()->right);
            s1.pop();
        }
        if(vec.size()!=0)
        sol.push_back(vec);
        vec.clear();
        while(!s2.empty())
        {
            vec.push_back(s2.top()->val);
            if(s2.top()->right!=NULL)
                s1.push(s2.top()->right);
            if(s2.top()->left!=NULL)
                s1.push(s2.top()->left);
            s2.pop();
        }
        if(vec.size()!=0)
        sol.push_back(vec);
        vec.clear();
    }
    return sol;

}





