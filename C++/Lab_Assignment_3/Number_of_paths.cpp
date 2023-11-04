#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int numPaths(int m, int n) {
    if (m == 1 || n == 1) {
        return 1;
    }
    return numPaths(m-1, n) + numPaths(m, n-1);
}


int main()
{
    int m, n;
    cin >> m >> n;
    cout << numPaths(m, n);
    return 0;
}