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

        if (n == 1)
        {
            cout << 1 << endl;
            continue;
        }

        // n -> odd
        if (n & 1)
        {
            cout << -1 << endl;
            continue;
        }

// for printing even and odd
        for (int i = 2; i <= n; i += 2)
        {
            cout << i << " " << (i - 1) << " ";
        }
        cout << endl;
    }
    return 0;
}