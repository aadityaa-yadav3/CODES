#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int flag = 0;

    //assigning memory to array 1
    int lenArr1;
    cin >> lenArr1;
    int *arr1 = new int[lenArr1];

    //taking input in array 1
    for (int i = 0; i < lenArr1; i++){
        cin >> arr1[i];
    }

    //assigning memory to array 2
    int lenArr2;
    cin >> lenArr2;
    int *arr2 = new int[lenArr2];

    //taking input in array 2
    for (int i = 0; i < lenArr2; i++){
        cin >> arr2[i];
    }

    //comparing the arrays
    for (int i = 0; i < lenArr1; i++){
        for (int j = 0; j < lenArr2; j++){
            if (arr1[i] == arr2[j]){
                flag = 1;
                cout << arr1[i] << " ";
            }
        }
    }

    //checking for no similarities
    if (flag == 0){
        cout << -1;
    }
    return 0;
}