#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string ans[1000];
int idx = 0;

void customListSort(string *list, int len){
    for(int i = 0; i < len; i++){
        for (int j = i; j < len; j++){
            if (list[j].compare(list[j-1]) < 0){
                string temp = list[j];
                list[j] = list[j-1];
                list[j-1] = temp;
            }
        }
    }
}

void nextPermutation(string str, int l, int r) {
    if (l == r) {
        ans[idx] = str;
        idx++;
    } else {
        for (int i = l; i <= r; i++) {
            swap(str[l], str[i]);
            nextPermutation(str, l + 1, r);
            swap(str[l], str[i]);
        }
    }
}


int main() {
    string str; cin >> str;
    sort(str.begin(), str.end());
    nextPermutation(str, 0, str.size() - 1);
    customListSort(ans, idx);
    for (int i = 0; i < idx; i++){
        cout << ans[i] << " ";
    }
    return 0;
}