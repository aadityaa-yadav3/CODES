#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int m, n;
    cin >> m >> n;
    
    //assigning memory block to arrays
    int **arr1 = new int*[m];
    for (int i = 0; i < m; i++) {
        arr1[i] = new int[n];
    }
    int **arr2 = new int*[m];
    for (int i = 0; i < m; i++) {
        arr2[i] = new int[n];
    }
    
    //taking input in the arrays
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> arr1[i][j];
        }
    }
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> arr2[i][j];
        }
    }
    
    //giving output after adding
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cout << arr1[i][j] + arr2[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}