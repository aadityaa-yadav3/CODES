#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    //taking input
    int a, b;
    cin >> a >> b;
    
    //making pointers
    int *ptr1 = &a, *ptr2 = &b;
    
    //swapping using pointers
    int tmp = *ptr2;
    *ptr2 = *ptr1;
    *ptr1 = tmp;

    cout << a << " " << b;
    return 0;
}