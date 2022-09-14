// 83. Remove Duplicates from Sorted List


class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL)    return head;
        ListNode *temp = head;
        while(temp->next != NULL){
            if(temp->val==temp->next->val){
                ListNode *delNode = temp->next;
                temp->next = delNode->next;
                delete delNode;
            }
            else{
                temp = temp->next;
            }
        }
        return head;
    }
};