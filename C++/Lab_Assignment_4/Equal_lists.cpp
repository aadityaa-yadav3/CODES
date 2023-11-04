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

    bool isEqual(Node* head2){
        Node* temp2 = head2;
        Node* temp1 = head;
        while(temp1->next != NULL && temp2->next != NULL){
            if (temp1->data != temp2->data){
                return false;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        if(temp1->next != NULL || temp2->next != NULL){
            return false;
        }
        else{
            return true;
        }
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
    int num2; cin >> num2;
    for(int i = 0; i < num1; i++){
        int number;
        cin >> number ;
        LL1.tailInsert(number);
    }
    for(int i = 0; i < num2; i++){
        int number;
        cin >> number ;
        LL2.tailInsert(number);
    }
    Node* head2 = LL2.getHead();
    (LL1.isEqual(head2)) ? cout << 1: cout << 0;
    return 0;
}