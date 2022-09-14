// 938. Range Sum of BST


class Solution {
public:
    int total=0;
    void inorder(TreeNode* root, int low, int high){
        if(root==NULL)  return;
        inorder(root->left,low,high);
        if(root->val>=low && root->val<=high){
            total += root->val;
        }
        inorder(root->right,low,high);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        inorder(root,low,high);
        return total;
    }
};