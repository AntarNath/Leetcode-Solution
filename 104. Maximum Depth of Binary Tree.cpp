// 104. Maximum Depth of Binary Tree


class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == NULL){
            return 0;
        }
        int x = maxDepth(root->left);
        int y = maxDepth(root->right);
        return max(x,y)+1;
    }
};