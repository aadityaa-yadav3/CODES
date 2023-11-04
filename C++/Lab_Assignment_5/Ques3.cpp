#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <queue>
#include <cstring>
#include <algorithm>
using namespace std;

void showq(queue<char> gq)
{
    queue<char> g = gq;
    while (!g.empty()) {
        cout << g.front();
        g.pop();
    }
    cout << '\n';
}
 

int main() {
    string str;
    cin>>str;
    queue<char> sq;
    sq.push(str[0]);
    for (int idx = 1; idx < str.size(); idx++){
        if(str[idx] != str[idx-1]){sq.push(str[idx]);}
    }
    showq(sq);
    return 0;
}
