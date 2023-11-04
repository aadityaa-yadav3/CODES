#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    //taking input
    int n;
    cin >> n;

    //creating pointer array
    int *arr = new int[n];

    //taking input in array
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    //traversing throught the array using pointer
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += *(arr + i);
    }
    
    cout << sum;
    return 0;
}