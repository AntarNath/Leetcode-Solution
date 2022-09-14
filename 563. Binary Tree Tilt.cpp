// 563. Binary Tree Tilt


class Solution {
public:
    int tilt = 0;
    
    int findTilt(TreeNode* root) {
        findTiltValue(root);
        return tilt;
    }
    int findTiltValue(TreeNode *root){
        if(root==NULL)  return 0;
        int left = findTiltValue(root->left);
        int right = findTiltValue(root->right);
        tilt += abs(left-right);
        return (left+right+root->val);
    }
};