#include <bits/stdc++.h>
using namespace std;

int main() {
    int numElements;
    cin >> numElements;

    vector<int> elements(numElements);
    for (auto &elem : elements) {
        cin >> elem;
    }
    vector<int> segments;

    int flag = 0, count = 0;
    for (int i = 0; i < numElements; i++) {
        if (elements[i] >= 1) {
            count++;
            flag = (flag || elements[i] == 2);
        }

        if (elements[i] == 0) {
            if (count) {
                if (flag) {
                    segments.push_back(-count);
                } else {
                    segments.push_back(count);
                }

                count = 0;
                flag = 0;
            }

            segments.push_back(0);
        }
    }

    if (count) {
        if (flag) {
            segments.push_back(-count);
        } else {
            segments.push_back(count);
        }
    }

    int ans = 0, was = 0;
    for (int i = 0; i < segments.size(); i++) {
        if (segments[i] == 0) {
            if (was) {
                ans++;
            } else {
                was = 1;
            }
        } else {
            if (segments[i] > 0) {
                if (was) {
                    was = 0;
                    ans++;
                } else {
                    ans++;
                    i++;
                }
            } else {
                ans++;
                was = 0;
                i++;
            }
        }
    }

    if (was) {
        ans++;
    }
    cout << ans;
    return 0;
}
