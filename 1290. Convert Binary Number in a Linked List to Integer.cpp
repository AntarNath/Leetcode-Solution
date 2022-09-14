// 1290. Convert Binary Number in a Linked List to Integer



class Solution {
public:
    int sizeOfList(ListNode *head){
        ListNode *temp = head;
        int size=0;
        while(temp != NULL){
            size++;
            temp = temp->next;
        }
        return size;
    }
    
    int getDecimalValue(ListNode* head) {
        int size = sizeOfList(head);
        int decimal = 0;
        int i=size-1;
        ListNode *temp = head;
        while(temp != NULL){
            if(temp->val==1){
                decimal += pow(2,i);
            }
            i--;
            temp = temp->next;
        }
        return decimal;
    }
};