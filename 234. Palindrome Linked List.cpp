// 234. Palindrome Linked List


class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack<int>st;
        ListNode *temp = head;
        while(temp != NULL){
            st.push(temp->val);
            temp = temp->next;
        }
        
        temp = head;
        
        while(temp != NULL){
            if(st.top()==temp->val){
                st.pop();
                temp = temp->next;
            }
            else{
                return false;
            }
        }
        return true;
    }
};