#include <bits/stdc++.h>
using namespace std;


int main() {
    int num, max = 0, count = 0; cin >> num;
    while (num--) {
        int tmp; cin >> tmp;
        if (tmp == 1) {
            count++;
        }
        else {
            if (count >= max){max = count;}
            count = 0;
        }
        if(tmp == 1 && num == 0){
            if (count >= max){max = count;}
            count = 0;
        }
    }
    cout << max;
    return 0;
}
