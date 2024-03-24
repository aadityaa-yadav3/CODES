#include <bits/stdc++.h>
using namespace std;

struct node {
    struct node* next;
    int val;
};

void printList(struct node* head){
    struct node* ptr = head;
    while(ptr != NULL){
        cout << ptr->val << " ";
        ptr = ptr->next;
    }
}

struct node* insert(struct node* head, int data){
    struct node* newnode = new node;
    newnode->val = data;
    newnode->next = head;
    return newnode;
}

int main(){
    int n = 5;
    struct node* head = NULL;
    while(n--){
        head = insert(head, n+1);
    }
    printList(head);
}