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

    int getlen(){
        Node* temp = head;
        int count = 0;
        while(temp){
            count++;
            temp = temp->next;
        }
        return count;
    }

    void sortList()
    {
        int len = getlen();
        while(len--){
            Node* prev = head;
            Node* curr = head->next;
            while (curr != NULL)
            {
                if (curr->data < prev->data)
                {
                    prev->next = curr->next;
                    curr->next = head;
                    head = curr;
                    curr = prev;
                }
                else{
                    prev = curr;
                }
                curr = curr->next;
            }
        }
    }

    void reverse()
    {
        Node* curr = head; Node* slow = NULL; Node* fast = NULL;
        while (curr) {
            fast = curr->next;
            curr->next = slow;
            slow = curr;
            curr = fast;
        }
        head = slow;
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
    LL.display();
    LL.sortList();
    LL.display();
    return 0;
}