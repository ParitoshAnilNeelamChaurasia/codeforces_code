
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t, n, m, sx, sy, d;

    cin >> t;

    for (; t--;)
    {
        cin >> n >> m >> sx >> sy >> d;

        if (sx - d > 1 && sy + d < m)
        {
            cout << n + m - 2 << "\n";
        }
        else if (sy - d > 1 && sx + d < n)
        {
            cout << n + m - 2 << "\n";
        }
        else
        {
            cout << "-1\n";
        }
    }
}