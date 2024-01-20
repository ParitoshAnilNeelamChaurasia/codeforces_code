// https://codeforces.com/problemset/problem/1358/B

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n + 1];

        for (int i = 1; i <= n; ++i)
        {
            cin >> a[i];
        }

        sort(a + 1, a + n + 1);
        int ans = 0;
        for (int i = n; i >= 1; --i)
        {
            if (i >= a[i])
            {
                ans = i;
                break;
            }
        }

        cout << ans + 1 << endl;
    }
    return 0;
}