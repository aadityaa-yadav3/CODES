#include <iostream>
#include <vector>
using namespace std;

void makeNonDecreasing() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<pair<int, int>> operations; // To store the operations

    // Perform the operations from left to right
    for (int i = 0; i < n - 1; i++) {
        while (arr[i] > arr[i + 1]) {
            // Add arr[i + 1] to arr[i] to make it non-decreasing
            arr[i] += arr[i + 1];
            operations.push_back(make_pair(i + 1, i + 2));
            if (i > 0)
                i--; // Move one step back to check with the previous element
        }
    }

    cout << operations.size() << '\n';
    for (auto op : operations) {
        cout << op.first << " " << op.second << '\n';
    }
}

int main() {
    int numTestCases;
    cin >> numTestCases;

    while (numTestCases--) {
        makeNonDecreasing();
    }

    return 0;
}
