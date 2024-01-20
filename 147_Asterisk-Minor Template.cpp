
// https://codeforces.com/problemset/problem/1796/B


#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll f = 0, i, j, n, m;
        string a, b;
        cin >> a >> b;

        n = a.size();
        m = b.size();

        if (a[0] == b[0])
        {
            cout << "YES\n";
            cout << a[0] << "*"<<endl ;
            continue;
        }
        else if (a[n - 1] == b[m - 1])
        {
            cout << "YES\n";
            cout << "*" << a[n - 1] << endl ;
            continue;
        }

        for (i = 0; i < n - 1; i++)
        {
            for (j = 0; j < m - 1; j++)
            {
                if (a[i] == b[j] && a[i + 1] == b[j + 1])
                {
                    f = 1;
                    break;
                }
            }
            if (f == 1)
            {
                break;
            }
        }

        if (f == 1)
        {
            cout << "YES" << endl ;
            cout << "*" << a[i] << a[i + 1] << "*"<<endl ;
        }
        else
        {
            cout << "NO" << endl ;
        }
    }
    return 0;
}
