#include <bits/stdc++.h>
using namespace std;

struct node {
    struct node* next;
    int val;
};


void printList(struct node* head){
    struct node* current = head;
    while(current != NULL){
        cout << current->val << " ";
        current = current->next;
    }
}

void insertAtEnd(int data, struct node** head){
    if (*head == NULL){
        struct node* newnode = (struct node*) malloc (sizeof(struct node));

        newnode->val = data;
        newnode->next = NULL;
        *head = newnode;
    }

    else {
        struct node *tmp = *head;

        while(tmp->next != NULL){
            tmp = tmp->next;
        }

        struct node* newnode = (struct node*) malloc(sizeof(struct node));

        tmp->next = newnode;
        newnode->val = data;
        newnode->next = NULL;
    }
}

int main(){
    struct node* head = NULL;

    for (int i = 0; i < 5; i++){
        insertAtEnd(i, &head);
    }

    printList(head);
}