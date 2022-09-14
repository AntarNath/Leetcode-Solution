// 637. Average of Levels in Binary Tree



class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>v;
        if(root == NULL)    return v;
    queue<TreeNode*>q;
    q.push(root);
    q.push(NULL);
    
    while (!q.empty())
    {   
        int count = 0;
        double sum = 0;
        if(q.front()==NULL){
            break;
        }
        while(q.front()!=NULL){
            count++;
            TreeNode *temp = q.front();
            sum += temp->val;
            q.pop();
            if(temp->left != NULL){
                q.push(temp->left);
            }
            if(temp->right != NULL){
                q.push(temp->right);
            }

        }
        double avg =  sum / count;
        v.push_back(avg);

        q.pop();
        q.push(NULL);
    }

    return v;
    }
};