#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool isGoodNumber(int number, int digit)
{
    string num = to_string(number);
    int idx = num.size()-1;
    int sum = 0;
    while (idx--){
        sum += num[idx+1] - '0';
        if(num[idx] - '0' <= sum || num[idx+1] - '0' == digit || num[idx] - '0' == digit){
            return false;
        }
    }
    return true;
}

int main(){
    int num1, num2, digit;
    cin >> num1 >> num2 >> digit;
    for(int i = num1; i < num2; i++){
        if(isGoodNumber(i, digit)){cout <<i << " ";}
    }
}