// 606. Construct String from Binary Tree


class Solution {
public:
    void createString(TreeNode* root, string &s){
        if(root==NULL)  return;
        
        if(root->left==NULL && root->right==NULL){
            s += to_string(root->val);
            return;
        };
        s += to_string(root->val);
        s += '(';
        createString(root->left,s);
        s += ')';
        if(root->right!=NULL) {
            s += '(';
            createString(root->right,s);
            s += ')';
        }
    }
    string tree2str(TreeNode* root) {
        string s;
        createString(root,s);
        return s;
    }
};