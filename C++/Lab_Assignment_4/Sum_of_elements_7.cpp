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

void display(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int sumLL(Node* head){
    int sum = 0;
    Node* temp = head;
    while(temp != NULL){
        sum += temp->data;
        temp = temp->next;
    }
    return sum;
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
    int sum = sumLL(head);
    cout << sum;
    return 0;
}