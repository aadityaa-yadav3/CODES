//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
struct Node* modifyTheList(struct Node *head);
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

void print(Node *head)
{
    Node *temp=head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<<endl;
}

class Solution{
    public:
    
    Node* reverseLinkedList(Node* head) {
        Node* curr = head; Node* slow = NULL; Node* fast = NULL;
        while (curr) {
            fast = curr->next;
            curr->next = slow;
            slow = curr;
            curr = fast;
        }
        return slow;
    }

    
    void modifyTheList(struct Node *head)
    {
        if (head == nullptr || head->next == nullptr){return;}
        
        int count = 0;
        Node* tmp = head;
        while(tmp){
            count++;
            tmp = tmp->next;
        }
        
        int mid =count / 2;
        tmp = head;
        for (int i = 1; i <= mid; i++) {tmp = tmp->next;}
        
        tmp = head;

        struct Node *newHead = NULL,*temp=NULL;
        while(tmp){
            Node *newNode = new Node(tmp->data);
            if (newHead == NULL){newHead = newNode;}
            else {
                temp->next = newNode;
            }
            temp = newNode;
            tmp = tmp->next;
        }
        tmp = head;
        newHead = reverseLinkedList(newHead);
        Node* prev = NULL;
        while(mid--){
            tmp->data = newHead->data - tmp->data;
            prev = tmp;
            tmp = tmp->next;
            newHead = newHead->next;
        }
        prev->next = newHead;
    }
};



//{ Driver Code Starts.
int main()
{
  int n;
  cin>>n;
  struct Node *head = NULL,*temp=NULL;
  while(n--){
    int a;
    cin>>a;
    Node *newNode = new Node(a);
    if(head==NULL)
      head=newNode;
    else
      temp->next=newNode;
    temp=newNode;
  }
  Solution obj;
  obj.modifyTheList(head);
  print(head);
  return 0;
}
// } Driver Code Ends