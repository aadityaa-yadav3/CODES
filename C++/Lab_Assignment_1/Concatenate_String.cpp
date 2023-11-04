#include <cmath>
#include <cstdio>
#include <vector>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    //initializing srtings and pointers
    char str1[100], str2[100];
    char *p1 = str1;
    char *p2 = str2;

    //taking input
    cin >> str1 >> str2;

    //getting address of last char of string1
    while (*p1 != '\0') {
        p1++;
    }

    //pointing pointers to second string
    while (*p2 != '\0') {
        *p1 = *p2;
        p1++;
        p2++;
    }
    *p1 = '\0';

    cout << str1;
    return 0;
}
