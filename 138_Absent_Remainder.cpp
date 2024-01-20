/* https://codeforces.com/problemset/problem/1613/B */

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<ll> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());

        for (int i = 1; i <= n / 2; ++i)
        {
            cout << a[i] << " " << a[0] << endl;
        }
    }
    return 0;
}
