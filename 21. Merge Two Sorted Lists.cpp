// 21. Merge Two Sorted Lists



class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *head;
        if(list1 != NULL && list2 != NULL){
            if(list1->val >= list2->val){
                head = list2;
                list2 = list2->next;
            }
            else{
                head = list1;
                list1 = list1->next;
            }
        }
        else{
            if(list1!=NULL){
                head = list1;
                list1 = list1->next;
            }
            else if(list2!=NULL){
                head = list2;
                list2 = list2->next;
            }
        }
        
        ListNode *temp = head;
        
        while(list1 != NULL && list2 != NULL){
            if(list1->val >= list2->val){
                head->next = list2;
                list2 = list2->next;
                head = head->next;
            }
            else{
                head->next = list1;
                list1 = list1->next;
                head = head->next;
            }
        }
        while(list1 != NULL && list2 == NULL){
            head->next = list1;
            list1 = list1->next;
            head = head->next;
        }
        while(list1 == NULL && list2 != NULL){
            head->next = list2;
            list2 = list2->next;
            head = head->next;
        }
        
        return temp;
        
    }
};