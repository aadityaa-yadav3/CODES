#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;
    int a[n], mx = 0, mn = 0;

    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mx = max(mx, a[i]);
        mn = min(mn, a[i]);
    }

    
    if (n == 1 || mx == mn) {
        cout << "0\n";
        return;
    }

    
    if (mn == 0) {
        cout << n - 1 << "\n";
        for (int i = 0; i < n - 1; i++) {
            cout << i + 2 << " " << i + 1 << "\n";
        }
        return;
    }


    if (mx == 0) {
        cout << n - 1 << "\n";
        for (int i = n - 2; i >= 0; i--) {
            cout << i + 1 << " " << i + 2 << "\n";
        }
        return;
    }

    int pct = 0, nct = 0;


    for (int i = 0; i < n; i++) {
        if (a[i] >= 0) {
            pct++;
        } else {
            nct++;
        }
    }

    if (mx >= abs(mn)) {

        int l = 0;


        for (int i = 0; i < n; i++) {
            if (a[i] == mx) {
                l = i + 1;
            }
        }

        vector<pair<int, int>> v;


        for (int i = 0; i < n; i++) {
            if (mx != a[i] && a[i] < 0) {
                v.push_back({i + 1, l});
                a[i] += mx;
            }
        }


        for (int i = 0; i < n - 1; i++) {
            v.push_back({i + 2, i + 1});
        }

        cout << v.size() << "\n";

        for (int i = 0; i < v.size(); i++) {
            cout << v[i].first << " " << v[i].second << "\n";
        }
    } else {
        int l = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] == mn) {
                l = i + 1;
            }
        }

        vector<pair<int, int>> v;

        for (int i = 0; i < n; i++) {
            if (mn != a[i] && a[i] > 0) {
                v.push_back({i + 1, l});
                a[i] += mn;
            }
        }

        for (int i = n - 2; i >= 0; i--) {
            v.push_back({i + 1, i + 2});
        }

        cout << v.size() << "\n";

        for (int i = 0; i < v.size(); i++) {
            cout << v[i].first << " " << v[i].second << "\n";
        }
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testcase = 1;
    cin >> testcase;
    while (testcase--) {
        solve();
    }
    return 0;
}
