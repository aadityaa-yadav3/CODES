#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long int n, k;
        cin >> n >> k;
        
        vector<pair<long long int, long long int>> v;
        for (int i = 0; i < n; i++)
        {
            long long int temp;
            cin >> temp;
            v.push_back({temp % k, i});
        }

        sort(v.begin(), v.end());

        vector<int> ans; 
        vector<pair<int, int>> dev;

        for (int i = 0; i < n; i++)
        {
            if (v[i].first == 0)
            {
                ans.push_back(v[i].second);
            }
            else
            {
                dev.push_back({v[i].first, -1 * v[i].second});
            }
        }
        sort(dev.begin(), dev.end());
        reverse(dev.begin(), dev.end());
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] + 1 << " ";
        }

        for (int i = 0; i < dev.size(); i++)
        {
            cout << -1 * dev[i].second + 1 << " ";
        }
        cout << endl;
    }
    return 0;
}
