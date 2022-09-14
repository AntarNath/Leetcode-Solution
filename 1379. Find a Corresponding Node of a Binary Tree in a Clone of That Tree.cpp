// 1379. Find a Corresponding Node of a Binary Tree in a Clone of That Tree



class Solution {
public:
    void preorder(TreeNode* cloned, TreeNode* target, TreeNode** ans ){
        if(cloned==NULL)    return ;
        if(cloned->val==target->val){
            *ans = cloned;
            
            return;
        }
        preorder(cloned->left , target,ans);
        preorder(cloned->right, target,ans);
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        TreeNode* ans;
        preorder(cloned,target,&ans);
        return ans;
    }
};