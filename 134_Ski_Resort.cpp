#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k, q;
        cin >> n >> k >> q;

        vector<ll> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        ll count = 0;
        ll cons_day = 0;

        for (int i = 0; i < n;)
        {
            if (a[i] > q)
            {
                i++;
                continue;
            }

            cons_day = 0;

            while ((i < n) && (a[i] <= q))
            {
                i++;
                cons_day++;
            }

            if (cons_day >= k)
            {
                ll seq_count = (cons_day - k) + 1;
                count += ((seq_count + 1) * seq_count) / 2;
            }
        }
        cout << count << endl;
    }
    return 0;
}
