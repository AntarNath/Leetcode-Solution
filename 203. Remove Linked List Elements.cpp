// 203. Remove Linked List Elements


class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL)  return head;
        
        while(head->val == val){
            ListNode *delNode = head;
            head = head->next;
            delete delNode;
            if(head==NULL)  return head;
        }
        ListNode *temp = head;
        while(temp->next != NULL){
            if(temp->next->val==val){
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