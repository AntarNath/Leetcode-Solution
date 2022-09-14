// 876. Middle of the Linked List



class Solution {
public:
    int countingLength(ListNode *head){
        ListNode *temp = head;
        int count=0;
        while(temp != NULL){
            count++;
            temp = temp->next;
        }
        return count;
    }
    ListNode* middleNode(ListNode* head) {
        ListNode *temp = head;
        if(head==NULL)  return head;
        int size = countingLength(head);
        int count = size/2;
        if(size%2==0){
            int idx = 0;
            while(idx < count){
                temp = temp->next;
                idx++;
            }
            return temp;
        }
        else{
            int idx=0;
            while(idx<count){
                temp = temp->next;
                idx++;
            }
            return temp;
        }
    }
};