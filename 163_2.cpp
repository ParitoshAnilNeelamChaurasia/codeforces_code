#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        ll k;
        cin >> n >> k;

        vector<ll> a(k);
        for (ll i = 0; i < k; ++i)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        ll cat = 0;
        ll ans = 0;

        for (ll i = k - 1; i >= 0; --i)
        {
            ll x = a[i];

            if (x <= cat)
            {
                break;
            }

            ll mice = n - x;
            cat = cat + mice;
            ans++;
        }
        cout << ans << endl;
    }
}