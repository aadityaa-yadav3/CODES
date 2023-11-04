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

    void rotate(int k){
        Node* temp = head; Node* prev = nullptr;
        while(k--){
            prev = temp;
            temp= temp->next;
        }
        if(temp == NULL){
            return;
        }
        Node* newHead = temp;
        prev->next = NULL;
        while(temp->next){
            temp = temp->next;
        }
        temp->next = head;
        head = newHead;
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
    linkedList LL;
    int num; cin >> num;
    for(int i = 0; i < num; i++){
        int number;
        cin >> number ;
        LL.tailInsert(number);
    }
    int k; cin >> k;
    LL.rotate(k);
    LL.display();
    return 0;
}