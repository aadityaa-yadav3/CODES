#include <iostream>
#include <string>

using namespace std;

string ans[1000];
int idx = 0;

void customListSort(string *list, int len){
    for(int i = 0; i < len; i++){
        for (int j = 0; j < len-i; j++){
            if (list[j].compare(list[j-1]) < 0){
                string temp = list[j];
                list[j] = list[j-1];
                list[j-1] = temp;
            }
        }
    }
}


void generate_subsequences(string str, string curr, long unsigned int index) {
    if (index == str.length()) {
        // cout << curr << " ";
        ans[idx] = curr;
        idx++;
        return;
    }
    generate_subsequences(str, curr + str[index], index + 1);
    generate_subsequences(str, curr, index + 1);
}

int main() {
    string str;
    cin >> str;
    generate_subsequences(str, "", 0);
    customListSort(ans, idx);
    for (int i = 0; i < idx; i++){
        if (ans[i] != ""){
            cout << " " << ans[i];
        }
    }
    return 0;
}
