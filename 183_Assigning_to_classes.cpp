// https://codeforces.com/contest/1300/problem/B

#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll m = 2 * n;
        vector<ll> a(m);

        for (int i = 0; i < m; ++i)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        ll res = abs(a[n] - a[n - 1]);

        cout << res << endl;
    }
    return 0;
}