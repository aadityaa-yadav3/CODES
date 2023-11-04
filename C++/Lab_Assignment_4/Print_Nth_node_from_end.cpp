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

int idxSearch(Node* head, int idx){
    if(idx < 0){ return -1;}
    else{
        Node* temp = head;
        while(idx--){
            temp=temp->next;
        }
        return temp->data;
    }
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
    int idx; cin >> idx;
    for(int i = 0; i < num; i++){
        int number;
        cin >> number ;
        tailInsert(head, number);
    }
    cout << idxSearch(head, num-idx);
    return 0;
}