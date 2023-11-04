#include <bits/stdc++.h>

using namespace std;



class DoublyLinkedListNode {
    public:
        int data;
        DoublyLinkedListNode *next;
        DoublyLinkedListNode *prev;

        DoublyLinkedListNode(int node_data) {
            this->data = node_data;
            this->next = nullptr;
            this->prev = nullptr;
        }
};

void print_doubly_linked_list(DoublyLinkedListNode* node) {
    while (node) {
        cout << node->data << " ";

        node = node->next;
    }
}


class DoublyLinkedList {
    public:
        DoublyLinkedListNode *head;
        DoublyLinkedListNode *tail;

        DoublyLinkedList() {
            this->head = nullptr;
            this->tail = nullptr;
        }

        void insert_node(int node_data) {
            DoublyLinkedListNode* node = new DoublyLinkedListNode(node_data);

            if (head == NULL) {
                head = node;
                return;
            } 
            
            DoublyLinkedListNode *temp = head;
            while(temp->next!=NULL){
                temp = temp->next;
            }

            temp->next = node;
            node->prev = temp;
        }
    
        void shift_k(int len, int kill){
            if(kill == 0 || len == 1 || kill == len) return;
            
            DoublyLinkedListNode *temp = head;
            int diff = len-kill-1;
            while(diff--) temp = temp->next;
            
            DoublyLinkedListNode *trucker = temp->next;
            DoublyLinkedListNode *static_trucker = temp->next;
            temp->next = NULL;
            trucker->prev = NULL;
            while(trucker->next!=NULL) trucker = trucker->next;
            trucker->next = head;
            head->prev = trucker;
            head = static_trucker;
        }
};


int main()
{

    DoublyLinkedList llist;

    int llist_count;
    cin >> llist_count;

    for (int i = 0; i < llist_count; i++) {
        int llist_item;
        cin >> llist_item;

        llist.insert_node(llist_item);
    }

    int shifter = 0; cin >> shifter;
    
    llist.shift_k(llist_count, shifter);
    
    print_doubly_linked_list(llist.head);

    return 0;
}
