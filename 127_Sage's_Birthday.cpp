#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    ll n;
    cin >> n;
    vector<ll> arr(n);

    vector<ll> v;

    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans[n];

    if (n <= 2)
    {
        // If there are 2 or fewer ice spheres, no reordering needed
        cout << "0" << endl;
        for (ll i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }
    else
    {
        // If there are more than 2 ice spheres, attempt reordering

        // number of spheres sage can buy
        ll k = n / 2;

        if (n % 2 == 0)
        {
            k = k - 1;
        }

        sort(arr.begin(), arr.end());

        // initialize counter
        ll c = 0;

        // Reorder ice spheres in such a way that cheap ones are at alternate position

        // cheap spheres -> odd index
        for (ll i = 1; i < n; i += 2, c++)
        {
            ans[i] = arr[c];
        }

        // remaining spheres -> even index
        for (ll i = 0; i < n; i += 2, c++)
        {
            ans[i] = arr[c];
        }

        // count of purchasable spheres
        cout << k << endl;

        // Output the reordered ice spheres
        for (ll i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
