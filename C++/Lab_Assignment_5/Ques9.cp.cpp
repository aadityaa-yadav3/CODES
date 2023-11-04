#include <bits/stdc++.h>
using namespace std;


int main() {
    int num; cin >> num;
    vector<int> arr;
    while(num--){
        int tmpVal; cin >> tmpVal;
        arr.push_back(tmpVal);
    }
    int k; cin >> k;
    vector<int> ans;
    for (long unsigned int i = 0; i < arr.size(); i++){
        int count = 0; int tmpK = k; int j = i;
        while (tmpK != 0 || arr[j] == 1){
            if (arr[j] == 1){
                count++;
            }
            else {
                if (tmpK > 0) {
                    count++;
                    tmpK--;
                }
                else {
                    break;
                }
            }
            j++;
        }
        ans.push_back(count);
    }
    cout<< *max_element(ans.begin(), ans.end());
    return 0;
}
