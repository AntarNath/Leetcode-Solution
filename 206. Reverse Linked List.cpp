// 206. Reverse Linked List



class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL)  return head;
        ListNode *curr = head;
        ListNode *prev = NULL;
        
        while(curr != NULL){
            ListNode *newNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = newNode;
        }
        head = prev;
        return head;
    }
};