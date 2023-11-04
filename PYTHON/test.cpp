#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore(); // Clear the newline character from the previous input

    for (int i = 0; i < n; i++) {
        string arr;
        getline(cin, arr);

        if (arr == "()") {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
            string a = string(arr.size(), '(') + string(arr.size(), ')');
            string b = string(arr.size(), '(') + string(arr.size(), ')');
            
            if (b.find(arr) != string::npos) {
                cout << a << endl;
            } else {
                cout << b << endl;
            }
        }
    }

    return 0;
}
