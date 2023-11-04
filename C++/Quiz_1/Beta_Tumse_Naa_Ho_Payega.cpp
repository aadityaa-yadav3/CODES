#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void generate_power_set(string S, long unsigned int K, long unsigned int X, string curr_set, long unsigned int idx, long unsigned int& count, string& ranked_str) {
    if (curr_set.size() == K) {
        count++;
        if (count == X) {
            ranked_str = curr_set;
        }
        return;
    }
    if (idx == S.size()) {
        return;
    }
    generate_power_set(S, K, X, curr_set + S[idx], idx+1, count, ranked_str);
    generate_power_set(S, K, X, curr_set, idx+1, count, ranked_str);
}

int main() {
    string S, ranked_str;
    long unsigned int K, X, count = 0;
    cin >> S >> K >> X;
    sort(S.begin(), S.end());
    generate_power_set(S, K, X, "", 0, count, ranked_str);
    sort(ranked_str.begin(), ranked_str.end());
    cout << ranked_str << endl;
    return 0;
}
