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

class linkedList{
    public:
    Node* head = NULL;
    void tailInsert(int val){
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

    Node* mergeSortedLists(Node* head2) {
        if (head == nullptr) {
            return head2;
        }
        if (head2 == nullptr) {
            return head;
        }
        Node* mergedList = nullptr;
        if (head->data <= head2->data) {
            mergedList = head;
            head = head->next;
            mergedList->next = mergeSortedLists(head2);
        }
        else {
            mergedList = head2;
            head2 = head2->next;
            mergedList->next = mergeSortedLists(head2);
        }
        return mergedList;
    }

    Node* getHead(){
        return head;
    }

    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    linkedList LL1;
    linkedList LL2;
    int num1; cin >> num1;
    for(int i = 0; i < num1; i++){
        int number;
        cin >> number ;
        LL1.tailInsert(number);
    }
    int num2; cin >> num2;
    for(int i = 0; i < num2; i++){
        int number;
        cin >> number ;
        LL2.tailInsert(number);
    }
    linkedList LL3;
    LL3.head = LL1.mergeSortedLists(LL2.getHead());
    LL3.display();
    return 0;
}   