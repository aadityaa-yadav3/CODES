#include <bits/stdc++.h>
using namespace std;

struct node {
    struct node* next;
    int val;
};

int main(){

    struct node* head = (struct node*) malloc(sizeof(struct node));

    head->next = NULL;
    head->val = 5;

    cout << head->val;
    
}