#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define MOD 1000000007
#define int long long
const int inf = 1e18;

void solve(){
    int n;
    cin >> n;

    stack<int> sta;
    stack<int> temp;
    int ans = 0;
    int x = 0;

    for (int i = 0; i < n; i++){
        int q;
        cin >> q;
        temp.push(q);
    }

    while (!temp.empty()){
        sta.push(temp.top());
        temp.pop();
    }

    if (sta.size() - 1 <= sta.top()){
        sta.pop();
        while (!sta.empty()){
            ans += sta.top();
            sta.pop();
        }
    }

    while (!sta.empty() && sta.top() != 0){
        int x = sta.top();
        sta.pop();

        while (x-- && x <= sta.size()){
            ans += sta.top();
            sta.pop();
        }
    }

    cout << ans << endl;
}

signed main(){
    int t = 1;
    while (t--){
        solve();
    }
    return 0;
}
