#include<bits/stdc++.h>
using namespace std;

class MyStack
{
private:
    int arr[1000];
    int top;
public:
    MyStack(){top=-1;}
    int pop();
    void push(int);
};


int main()
{
  MyStack *sq = new MyStack();

  int Q;
  cin>>Q;
  while(Q--){
    int QueryType=0;
    cin>>QueryType;
    if(QueryType==1)
    {
      int a;
      cin>>a;
      sq->push(a);
    }else if(QueryType==2){
      cout<<sq->pop()<<" ";

    }
  }
  return 0;
}

void MyStack :: push(int x)
{
    top++;
    arr[top] = x;
}

int MyStack :: pop()
{
    if (top == -1) {return -1;}
    else {int tmp = arr[top]; arr[top] = 0; top--; return tmp;}
}

 