// 94. Binary Tree Inorder Traversal

class Solution {
public:
    vector<int> v;
    vector<int> inorderTraversal(TreeNode* root) {
        if(root == NULL) return v;
        
        v = inorderTraversal(root->left);
        v.push_back(root->val);
        v = inorderTraversal(root->right);
        
        return v;
    }
};