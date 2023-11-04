#include <cmath>
#include <cstdio>
#include <vector>
#include <cstring>
#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    //taking input in a pointer array string
    string arr;
    getline(cin, arr);
    int i = arr.length(), crr_max = arr.length();

    //itereating throught the array in reverse
    while (i >= 0){

        //printing words till find a space
        if (arr[i] == 32){
            for (int crr_min = i+1; crr_min < crr_max; crr_min++){
                cout << arr[crr_min];
            }
            cout << " ";
            crr_max = i;
        }
        //printing the last word
        else if (i == 0){
            for (int crr_min = i; crr_min < crr_max; crr_min++){
                cout << arr[crr_min];
            }
            cout << " ";
            crr_max = i;
        }
        i--;
    }
    return 0;
}