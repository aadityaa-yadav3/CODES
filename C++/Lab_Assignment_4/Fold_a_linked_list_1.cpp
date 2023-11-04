//{ Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/* Linked list Node */
struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

// } Driver Code Ends







class Solution{ 
public:
    void reorderList(Node* head) {
        Node* prev = head;
        while(prev != NULL){
            Node* temp = head; Node* temp_prev = NULL;
            if (prev->next == NULL || prev->next->next == NULL){return;}
            while(temp->next != NULL){
                temp_prev = temp;
                temp = temp->next;
            }
            temp_prev->next = NULL;
            temp->next = prev->next;
            prev->next = temp;
            prev = prev->next->next;
        }
    }
};





//{ Driver Code Starts.

/* Function to create a new Node with given data */
struct Node* newNode(int data) {
    struct Node* new_Node = new Node(data);
    new_Node->data = data;
    new_Node->next = NULL;
    return new_Node;
}

void printList(struct Node* Node) {
    while (Node != NULL) {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("\n");
}

void freeList(struct Node* head) {
    struct Node* temp;
    while (head != NULL) {

        temp = head;
        head = head->next;
        free(temp);
    }
}

int main(void) {
    int n, i, x;

  struct Node* temp, *head;
  cin >> n;
  cin >> x;
  head = new Node(x);
  temp = head;
  for (i = 0; i < n - 1; i++) {
    cin >> x;
    temp->next = new Node(x);
    temp = temp->next;
  }

  Solution ob;

  ob.reorderList(head);
  printList(head);
  freeList(head);

    return 0;
}

// } Driver Code Ends