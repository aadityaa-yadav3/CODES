#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class product{
    public:
        float Original_price;
        float Discount_Percentage;
        float faultyPrice(){
            float fp = Original_price*(1-(Discount_Percentage/100));
            if (fp > 100){
                fp += 10;
            }
            return fp;
        }
        float truePrice(){
            return Original_price*(1-(Discount_Percentage/100));
        }
};

int main() {
    int n;
    cin >> n;
    float diff = 0;
    while (n--){
        product temp;
        cin >> temp.Original_price >> temp.Discount_Percentage;
        diff += temp.faultyPrice() - temp.truePrice();
    }
    cout << diff;
    return 0;
}
