#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int testcases;
    scanf("%d", &testcases);
    
    while (testcases--) {
        int b, c, h;
        cin >> b >> c >> h;
        if (b > c+h) {cout << 2 * (c + h) + 1;}
        else {cout << 2 * b - 1;}
    }
    
    return 0;
}