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

    int idxSearch(int idx){
        if(idx < 0){ return -1;}
        else{
            Node* temp = head;
            while(idx--){
                temp=temp->next;
            }
            return temp->data;
        }
    }

    void reverse(){
        vector <int> values;
        Node* temp = head;
        while(temp != NULL){
            values.push_back(temp->data);
            temp = temp->next;
        }
        std::reverse(values.begin(), values.end());
        head = new Node(values[0]);
        temp = head;
        values.erase(values.begin());
        for(auto value : values){
            temp->next = new Node(value);
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
    LL.reverse();
    LL.display();
    return 0;
}