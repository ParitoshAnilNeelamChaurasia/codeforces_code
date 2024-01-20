#include <bits/stdc++.h>
using namespace std;
#define int long long

int a[N];
int b[N];

void solve()
{
    int n, q;
    cin >> n >> q;
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    sort(a + 1, a + n + 1);
    reverse(a + 1, a + n + 1);

    // prefix sum
    for (int i = 1; i <= n; i++)
    {
        b[i] = b[i - 1] + a[i];
    }
    while (q--)
    {
        int x, y;
        cin >> x >> y;
        y = x - y;       // cost laga
        cout << b[x] - b[y] << endl;
    }
}

int main()
{

    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
}