// 897. Increasing Order Search Tree


class Solution {
public:
    void inorderTraversal(TreeNode*root,queue<int>&q){
        if(root==NULL)return;
        inorderTraversal(root->left,q);
        q.push(root->val);
        inorderTraversal(root->right,q);
    }
    TreeNode* createNode(TreeNode* root,queue<int>q){
        if(q.empty())return root;
        
        int val = q.front();
        q.pop();
        root = new TreeNode(val);
        root->left = NULL;
        root->right = createNode(root->right,q);
        return root;
    }
    TreeNode* increasingBST(TreeNode* root) {
        queue<int>q;
        inorderTraversal(root,q);
        int val = q.front();
        q.pop();
        TreeNode* newRoot = new TreeNode(val);
        newRoot->left = NULL;
        newRoot->right = createNode(newRoot->right,q);
        return newRoot;
    }
};