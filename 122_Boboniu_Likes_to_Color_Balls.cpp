#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll r, g, b, w;
        cin >> r >> g >> b >> w;

        ll odd = 0;

        if (r % 2 != 0)
        {
            odd++;
        }

        if (g % 2 != 0)
        {
            odd++;
        }

        if (b % 2 != 0)
        {
            odd++;
        }

        if (w % 2 != 0)
        {
            odd++;
        }

        if (odd == 2 || odd >= 3 && (r == 0 || g == 0 || b == 0))
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
    }
    return 0;
}