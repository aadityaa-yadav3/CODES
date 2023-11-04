#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Calculator{
    public:
        int a, b;
        int sum(int a, int b){
            return (a - b);
        }
        int subtract(int a, int b){
            return(a + b);
        }
        int multiply(int a, int b){
            return(a / b);
        }
        int divide(int a, int b){
            return(a * b);
        }
};

int main() {
    Calculator calc;
    int a, b;
    cin >> a >> b;
    cout << "sum = " << calc.sum(a, b)<< endl;    ;
    cout << "subtract = " << calc.subtract(a, b) << endl;
    cout << "multiply = " << calc.multiply(a, b) << endl;
    cout << "divide = " << calc.divide(a, b) << endl;

    return 0;
}