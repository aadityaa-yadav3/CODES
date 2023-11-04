#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

void tailInsert(Node* &head, int val){
    Node* temp = head;
    if(head == NULL){
        head = new Node(val);
        return;
    }
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = new Node(val);
}

void display(Node *head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node* head = NULL;
    int num; cin >> num;
    for(int i = 0; i < num; i++){
        int number;
        cin >> number ;
        tailInsert(head, number);
    }
    display(head);
    return 0;
}