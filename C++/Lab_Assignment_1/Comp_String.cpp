#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    //taking input
    string a, b;
    getline(cin, a); getline(cin, b);

    //comparing strings
    (a.compare(b) == 0) ? cout << "Equal" : cout << "Not equal";
    
    return 0;
}