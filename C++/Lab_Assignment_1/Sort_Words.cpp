#include <cmath>
#include <cstdio>
#include <vector>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    //assigning memory block of size n
    string *arr = new string[n];

    //taking input in array
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    //sorting the array
    sort(arr, arr+n);

    //printing the array
    for (int i = 0; i < n; i++){
        cout << arr[i] << "\n";
    }
    
    return 0;
}