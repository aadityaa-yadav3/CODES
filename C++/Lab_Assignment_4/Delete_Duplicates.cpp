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

    void deleteNode(int idx){
        Node* temp = head;
        Node* prev = head;
        for (int i = 0; i <= idx; i++){
            if(idx == 0){
                head = head->next;
            }
            else{
                if(i == idx && temp != NULL){
                    prev->next = temp->next;
                    temp = NULL;
                }
                else{
                    prev = temp;
                    temp = temp->next;
                }
            }
        }
    }

    void deleteDuplicates(){
        Node* temp = head;
        vector <int> values;
        while(temp != NULL){
            int idx = 0;
            bool flag = true;
            for(auto i: values){
                if (temp->data == i){
                    flag = false;
                    deleteNode(idx);
                }
                idx++;
            }
            if (flag){
                values.push_back(temp->data);
            }
            temp = temp->next;
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
    for(int i = 0; i < num; i++){
        int number;
        cin >> number ;
        LL.tailInsert(number);
    }
    LL.deleteDuplicates();
    LL.display();
    return 0;
}