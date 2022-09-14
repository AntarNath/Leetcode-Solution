// 141. Linked List Cycle



class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL)  return false;
        if(head->next==NULL)    return false;
        ListNode *slow = head;
        ListNode *first = head;
        while(slow!=NULL && first!=NULL){
            slow = slow->next;
            first = first->next;
            if(first != NULL){
                first = first->next;
            }
            if(slow==first){
                return true;
            }
        }
        return false;
    }
};