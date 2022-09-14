// 1022. Sum of Root To Leaf Binary Numbers


class Solution {
public:
    int ans = 0;
    int convert(string s){
        int i=s.length()-1;
        int deci=0;
        for(int j=0;j<s.length();j++){
            int num = s[j]-'0';
            deci += num*pow(2,i);
            i--;
        }
        return deci;
        
    }
    void solution(TreeNode* root, string s){
        if(root==NULL)  return;
        char ch = root->val+48;
        s+=ch;
        if(root->left==NULL && root->right==NULL){
            int deci = convert(s);
            ans += deci;
        }
        solution(root->left,s);
        solution(root->right,s);
    }
    int sumRootToLeaf(TreeNode* root) {
        solution(root,"");
        return ans;
    }
};