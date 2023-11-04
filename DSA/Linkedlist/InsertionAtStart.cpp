#include <bits/stdc++.h>
using namespace std;

struct node {
    struct node* next;
    int val;
};

void insertAtStart(int data, struct node** head){
    struct node* tmp = (struct node*) malloc (sizeof(struct node));
    tmp->val = data;
    tmp->next = *head;
    *head = tmp;
}

void printList(struct node* head){
    struct node* current = head;
    while(current != NULL){
        cout << current->val << " ";
        current = current->next;
    }
}

int main(){
    struct node* head = NULL;

    for (int i = 0; i < 5; i++){
        insertAtStart(i, &head);
    }
    
    printList(head);
    
}