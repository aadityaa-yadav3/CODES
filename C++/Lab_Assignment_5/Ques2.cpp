#include <bits/stdc++.h>
using namespace std;

struct StackNode {
    int data;
    StackNode *next;
    StackNode(int a) {
        data = a;
        next = NULL;
    }
};

class MyStack {
  private:
    StackNode *top;

  public:
    void push(int);
    int pop();
    MyStack() { top = NULL; }
};

int main() {
  MyStack *sq = new MyStack();

  int Q;
  cin >> Q;
  while (Q--) {
    int QueryType = 0;
    cin >> QueryType;
    if (QueryType == 1) {
      int a;
      cin >> a;
      sq->push(a);
    } else if (QueryType == 2) {
      cout << sq->pop() << " ";
    }
  }
}

void MyStack ::push(int x) 
{
    StackNode* newHead = new StackNode(x);
    newHead->next = top;
    top = newHead;
}

int MyStack ::pop() 
{
    if (top == NULL){return -1;}
    else {
        int tmp = top->data;
        top = top->next;
        return tmp;
    }
}

    