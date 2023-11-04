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

    void insertAt(int idx, int val){
        Node* temp = head;
        if (idx == 0){
            Node* newNode = new Node(val);
            newNode->next = temp;
            head = newNode;
        }
        else{
            while(--idx){
                temp = temp->next;
            }
            Node* newNode = new Node(val);
            newNode->next = temp->next;
            temp->next = newNode;
        }
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
    int tempVal; cin >> tempVal;
    for(int i = 0; i < num; i++){
        int number;
        cin >> number ;
        LL.tailInsert(number);
    }
    LL.display();
    LL.tailInsert(tempVal);
    LL.display();
    return 0;
}