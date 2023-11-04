#include <bits/stdc++.h>
using namespace std;

int main() {
    int num; cin >> num;
    vector<int> arr;
    for(int i = 0; i < num; i++){
        int tmpVal; cin >> tmpVal;
        arr.push_back(tmpVal);
    }
    int k = arr.back(), idx = 0;
    while(idx < num-k){
        int max = arr[idx];
        for (int i = 0; i < k; i++){if (arr[idx+i] >= max) max = arr[idx+i];}
        idx++;
        cout << max << " ";
    }
    return 0;
}