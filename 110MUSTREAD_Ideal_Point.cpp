#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n, k;

        cin >> n >> k;

        ll left = 0;
        ll right = 0;
        ll center = 0;

        while (n--)
        {
            ll l, r;
            cin >> l >> r;

            if (k == l && k == r)
            {
                center++;
            }
            else if (k == l)
            {
                left++;
            }
            else if (k == r)
            {
                right++;
            }
        }

        if (center > 0)
        {
            cout << "YES" << endl;
        }
        else if (left > 0 && right > 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}