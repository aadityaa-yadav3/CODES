#include <bits/stdc++.h>
using namespace std;

class myQueue {
private:
    stack<int> stack1, stack2;
public:
    void enqueue(int x) {
        stack1.push(x);
    }

    void dequeue() {
        if (stack2.empty()) {
            while (!stack1.empty()) {
                stack2.push(stack1.top());
                stack1.pop();
            }
        }
        if (!stack2.empty()) {
            stack2.pop();
        }
    }

    void qfront() {
        if (stack2.empty()) {
            while (!stack1.empty()) {
                stack2.push(stack1.top());
                stack1.pop();
            }
        }
        if (!stack2.empty()) {
            cout << stack2.top() << '\n';
        }
    }
};

int main() {
    int num;
    cin >> num;
    myQueue qu;
    while (num--) {
        int query;
        cin >> query;
        if (query == 1) {
            int x;
            cin >> x;
            qu.enqueue(x);
        } else if (query == 2) {
            qu.dequeue();
        } else {
            qu.qfront();
        }
    }
    return 0;
}
