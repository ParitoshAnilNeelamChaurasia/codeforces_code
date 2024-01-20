#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;

        // need "a" as minimum always
        if (a < b)
        {
            swap(a, b);
        }

        // infinite excitment
        if (a == b)
        {
            cout << "0 0" << endl;
        }

        else
        {
            ll diff = abs(a - b);

            ll x = abs(a - b);

            // number of steps
            ll y = a % x;

            // which is minimum
            // either we have to increase by +1 or decrease by -1
            y = min(y, abs(y - x));

            cout << x << " " << y << endl;
        }
    }
    return 0;
}