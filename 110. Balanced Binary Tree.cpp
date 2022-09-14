// 110. Balanced Binary Tree


class Solution {
public:
    bool flag=true;
    int countHeight(TreeNode* root){
        if(root==NULL)  return 0;
        
        int x=countHeight(root->left);
        int y=countHeight(root->right);
        
        if(abs(x-y)>1){
            flag = false;
        }
        return max(x,y)+1;
    }
    bool isBalanced(TreeNode* root) {
        int height = countHeight(root);
        return flag;
    }
};