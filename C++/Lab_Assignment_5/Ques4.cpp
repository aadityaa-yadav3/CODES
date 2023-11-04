#include <bits/stdc++.h>
using namespace std;

void showq(queue<int> sq)
{
    queue<int> g = sq;
    while (!g.empty()) {
        cout << g.front();
        g.pop();
    }
    cout << '\n';
}

int main() {
    string str; cin >> str;
    for (long unsigned int idx = 0; idx < str.size(); idx++){
        if (str[idx] == str[idx + 1]){idx++;}
        else {cout << str[idx];}
    }
    // cout << str;
    return 0;
}
