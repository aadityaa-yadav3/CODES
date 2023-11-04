#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;


int main() {
    
    //taking input
    string a, subStr;
    getline(cin, a); getline(cin, subStr);

    //setting flag to 0
    int flag = 0;

    //checking for substrings
    for (int i = 0; i < a.length(); i++){
        string crr_subStr = a.substr(i,subStr.length());
        if (subStr.compare(crr_subStr) == 0){
            cout << i; flag = 1; break;
        }
    }

    //checking for change in flag
    if (flag == 0) printf("-1");
    
    return 0;
}