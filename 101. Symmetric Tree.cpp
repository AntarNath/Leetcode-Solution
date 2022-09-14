// 101. Symmetric Tree


class Solution {
public:
    bool isCheck(TreeNode *root1,TreeNode *root2){
        if(root1 == NULL && root2 == NULL)  return true;
        if(root1!=NULL && root2!=NULL && root1->val == root2->val){
            return (isCheck(root1->left,root2->right) && isCheck(root1->right,root2->left));
        }
        return false;
    }
    bool isSymmetric(TreeNode* root) {
        return isCheck(root,root);
    }
    
};