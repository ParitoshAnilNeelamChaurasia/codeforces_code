#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main()
{
    ll t;

    cin >> t;

    while (t--)
    {

        string s ;
        cin >> s ;
        ll n = s.size();

// for getting last 2 digits
        ll ans = n - 2;

        for (ll i = 0; i < n - 1; i++)
        {
            for (ll j = i + 1; j < n; j++)
            {
                ll num = 0;
//  s[i] - 48 -> gave ascii digits (for conversion)

// -48 -> didn't gets subtracted from the digit
                num = num * 10 + s[i] - 48;
                num = num * 10 + s[j] - 48;

// n - i - 2 -> for getting last 2 digits
                if ((num % 25) == 0)
                {
                    ans = min(ans, n - i - 2); 
                }
            }
        }

        cout << ans << endl ;
    }
}