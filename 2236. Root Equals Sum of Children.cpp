// 2236. Root Equals Sum of Children


class Solution {
public:
    bool checkTree(TreeNode* root) {
        int sum = 0;
        sum += root->left->val;
        sum += root->right->val;
        return(sum==root->val);
    }
};