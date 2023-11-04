#include <bits/stdc++.h>
using namespace std;

bool checkPar(string str) {
        stack<char> sq;
        for (auto tmp: str) {
            if (sq.empty()) {sq.push(tmp);}
            else if ((sq.top() == '(' && tmp == ')') || (sq.top() == '{' && tmp == '}') || (sq.top() == '[' && tmp == ']')) {sq.pop();}
            else {sq.push(tmp);}
        }
        if (sq.empty()) {return true;}
        return false;
}

int main() {
    string str; cin >> str;
    if (checkPar(str)){cout << "true";}
    else {cout << "false";}
    return 0;
}
