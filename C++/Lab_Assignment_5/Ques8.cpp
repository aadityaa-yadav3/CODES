#include <bits/stdc++.h>
using namespace std;

int main() {
    int num; cin >> num;
    int idx; cin >> idx;
    queue<int> qu;
    while(num--) {int tmp; cin >> tmp; qu.push(tmp);}
    list<int> tmpArr;
    while(idx--){tmpArr.push_front(qu.front()); qu.pop();}
    queue<int> newQueue;
    for(auto tmpVal: tmpArr){newQueue.push(tmpVal);}
    while(!qu.empty()){newQueue.push(qu.front()); qu.pop();}
    while(!newQueue.empty()){
        cout<<newQueue.front()<<" ";
        newQueue.pop();
    }
    return 0;
}
