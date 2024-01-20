// https://codeforces.com/problemset/problem/1605/B 

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t ;

    cin >> t;

    for (; t--;)
    {
        ll n;
        cin >> n;

        bool v[n + 1];

        string a;
        cin >> a;

        ll zeros = 0;
        ll total_ones = 0;

        for (ll i = 0; i < n; i++)
        {
            v[i] = false;
        }

        for (ll i = 0; i < n; i++)
        {
            if (a[i] == '1')
            {
                total_ones++;
            }
        }

        for (ll i = n - 1; i >= n - total_ones; i--)
        {
            if (a[i] == '0')
            {
                zeros++;
            }
        }

        if (zeros == 0)
        {
            cout << "0" << endl ;
        }

        else
        {
            cout << "1" << endl ;
            cout << 2 * zeros << " ";
            for (ll i = 0; i < n; i++)
            {
                if (i < n - total_ones && a[i] == '1')
                {
                    cout << i + 1 << " ";
                }
                else if (i >= n - total_ones && a[i] == '0')
                {
                    cout << i + 1 << " ";
                }
            }
            cout << endl ;
        }
    }
}