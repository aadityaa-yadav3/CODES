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
    
        void racks(int this_one){
            DoublyLinkedListNode *temp = head;
            while (temp){
                if(temp->data<this_one) cout<<temp->data<<" ";
                temp = temp->next;
            }
            
            temp = head;
            while (temp){
                if(temp->data>=this_one) cout<<temp->data<<" ";
                temp = temp->next;
            }
       
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

    int line = 0; cin >> line;
    
    llist.racks(line);

    return 0;
}