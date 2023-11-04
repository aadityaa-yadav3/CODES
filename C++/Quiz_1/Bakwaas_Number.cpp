#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int num; cin >> num;
    if (num == 5){
        cout << 0;
    }
    else{
        int flag = 1;
        for (int i = 2; i < num; i++){
            if (num % i == 0){
                flag = 0;
                break;
            }
        }
        cout << flag;
    }
    return 0;
}