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

    bool isPalindrome(){
        Node* temp = head;
        vector <int> values;
        int count = 0;
        while(temp != NULL){
            values.push_back(temp->data);
            temp = temp->next;
            count++;
        }
        for(int i = 0; i <= count/2; i++){
            if (values[i] != values[count-i-1]){
                return false;
            }
        }
        return true;
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
    (LL.isPalindrome()) ? cout << 1: cout << 0;
    return 0;
}