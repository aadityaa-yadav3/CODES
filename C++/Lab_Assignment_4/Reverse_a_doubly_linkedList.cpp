DoublyLinkedListNode* reverse(DoublyLinkedListNode* llist) {
    DoublyLinkedListNode* temp = llist; DoublyLinkedListNode* prev = NULL;

    while (temp) {
        prev = temp->prev;
        temp->prev = temp->next;
        temp->next = prev;
        temp = temp->prev;
    }
    
    if (prev != NULL)
        llist = prev->prev;
    
    return llist;

}