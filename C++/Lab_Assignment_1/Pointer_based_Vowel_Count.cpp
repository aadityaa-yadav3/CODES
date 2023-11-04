#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;


int main() {
    //intializing string and taking input
    string arr;
    getline(cin, arr);

    //creating a pointer pointing to the array
    char *ptr = &arr[0];
    int count = 0;

    //creating array of vowels
    char vowels[] = {'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U'};

    //traversing through the string using pointer and counting the number of vowels
    while (*ptr != '\0'){
        for (int i = 0; i < 10; i++){
            if (*ptr == vowels[i]){
                count++;
            }
        }
        ptr++;
    }
    
    std::cout << count;
    return 0;
}