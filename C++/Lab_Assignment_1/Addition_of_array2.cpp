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
    
    //assigning memory to pointer array
    int *arr1 = new int[n], *arr2 = new int[n];

    //taking input in array1
    for (int i = 0; i < n; i++){
        cin >> arr1[i];
    }

    //taking input in array2
    for (int i = 0; i < n; i++){
        cin >> arr2[i];
    }

    //traversing through arrays and compairing
    int sum = arr1[0] + arr2[0], flag = 1;
    for (int i = 1; i < n; i++){
        if (arr1[i] + arr2[i] != sum){
            flag = -1;
            break;
        }
    }

    //checking for flag
    (flag == 1) ? cout << sum : cout << flag;
    
    return 0;
}