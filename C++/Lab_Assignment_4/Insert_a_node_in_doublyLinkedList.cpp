DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* llist, int data) {
    DoublyLinkedListNode* head = llist;
    DoublyLinkedListNode* temp = head;
    DoublyLinkedListNode* prev = NULL;
    DoublyLinkedListNode* newNode = new DoublyLinkedListNode(data);
    if (temp->next == NULL){
        if(temp->data > data){
            newNode->next = temp;
            temp->prev = newNode;
            temp->next = NULL;
            return llist;
        }
        else{
            newNode->prev = temp;
            temp->next = newNode;
            return llist;
        }
    }
    if(temp->data >= data){
        newNode->next = temp;
        temp->prev = newNode;
        return newNode;
    }
    while(temp){
        if(temp->data > data){
            newNode->next = temp;
            newNode->prev = temp->prev;
            temp->prev = newNode;
            prev->next = newNode;
            return llist;
        }
        prev = temp;
        temp = temp->next;
    }
    prev->next = newNode;
    newNode->prev = prev;
    return llist;

}