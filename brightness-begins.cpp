#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;

const int mod = 1e9 + 7;

/* *************************************(code begins)**************************************** */

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll k;
        cin >> k;

        ll left = 1;
        ll right = 2e18;
        ll ans = 2e18;

        while (left <= right)
        {
            ll mid = left + (right - left) / 2;
            ll bulb_on = mid - (ll)sqrtl(mid); // Use sqrtl for better precision with large numbers

            if (bulb_on < k)
            {
                left = mid + 1;
            }
            else
            {
                ans = mid;
                right = mid - 1;
            }
        }
        cout << ans  << endl;
    }
    return 0;
}
