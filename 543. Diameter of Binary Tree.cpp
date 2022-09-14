//543. Diameter of Binary Tree

class Solution {
public:
    int maximum=0;
    int findDiameter(TreeNode* root){
        if(root==NULL)  return 0;
        
        int x = findDiameter(root->left);
        int y = findDiameter(root->right);
        maximum = max(maximum,x+y);
        return max(x,y)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int sum = findDiameter(root);
        return maximum;
    }
};