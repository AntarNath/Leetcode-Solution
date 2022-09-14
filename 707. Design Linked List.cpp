// 707. Design Linked List


class MyLinkedList {
public:
    int val;
    MyLinkedList *next;
    MyLinkedList *head;
    MyLinkedList() {
        head = NULL;
    }
    MyLinkedList(int val){
        this->val = val;
        this->next = NULL;
    }   
    int get(int index) {
        MyLinkedList *temp = head;
        int count=1;
        while(count<=index){
            temp = temp->next;
            if(temp==NULL){
                break;
            }
            count++;
        }
        if(temp==NULL)  return -1;
        else    return temp->val;
    }
    
    void addAtHead(int val) {
        MyLinkedList *newMyLinkedList = new MyLinkedList(val);
        newMyLinkedList->next = head;
        head = newMyLinkedList;
    }
    
    void addAtTail(int val) {
        MyLinkedList *newMyLinkedList = new MyLinkedList(val);
        if(head==NULL){
            head = newMyLinkedList;
            return;
        }
        MyLinkedList *temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newMyLinkedList;
    }
    
    void addAtIndex(int index, int val) {
        MyLinkedList *newMyLinkedList = new MyLinkedList(val);
        if(index==0){
            addAtHead(val);
            return;
        }
        MyLinkedList *temp = head;
        int count = 1;
        while(count <= index-1){
            temp = temp->next;
            if(temp == NULL)    return;
            count++;
        }
        if(temp==NULL)  return;
        newMyLinkedList->next = temp->next;
        temp->next = newMyLinkedList;
    }
    
    void deleteAtIndex(int index) {
        if(index==0){
            MyLinkedList *del = head;
            head = head->next;
            delete del;
        }
        MyLinkedList *temp = head;
        int count=1;
        while(count <= index-1){
            temp = temp->next;
            if(temp==NULL)  return;
            count++;
        }
        if(temp==NULL)  return;
        if(temp->next == NULL)  return;
        MyLinkedList *del = temp->next;
        temp->next = del->next;
        delete del;
    }
};