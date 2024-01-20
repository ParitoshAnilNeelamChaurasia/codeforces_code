#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n, a, b;
    cin >> n >> a >> b;

    if (a > b)
    {
        cout << 1 << endl;
        return;
    }

    cout << n / a + (n % b != 0) << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}