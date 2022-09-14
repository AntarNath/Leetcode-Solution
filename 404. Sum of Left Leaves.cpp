// 404. Sum of Left Leaves


class Solution {
public:
     int sum=0;
    int sumOfLeftLeaves(TreeNode* root) {
        if(root==NULL)  return 0;
        if(root->left!=NULL){
            if(root->left->left==NULL && root->left->right==NULL){
                sum += root->left->val;
            }
            sumOfLeftLeaves(root->left);
        }
        if(root->right!=NULL){
            sumOfLeftLeaves(root->right);
        }
        return sum;
    }
};