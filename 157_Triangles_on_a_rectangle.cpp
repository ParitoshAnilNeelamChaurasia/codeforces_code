// https://codeforces.com/problemset/problem/1620/B

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll w, h;
        cin >> w >> h;

        ll area = 0;
        ll k;
        ll p;
        ll first;    // first point
        ll last;     // last point
        for (int i = 0; i < 4; ++i)
        {
            cin >> k;

            // taking 'k' points

            for (int j = 0; j < k; ++j)
            {
                cin >> p;

                // first point
                if (j == 0)
                {
                    first = p;
                }
                
                // last point
                else if (j + 1 == k)
                {
                    last = p;
                }
            }

            // taking base
            ll base = last - first;
            
            // if we get -> horizontal line
            if (i < 2)
            {
                area = max(area, base * h);
            }

            // if we get -> vertical line
            else
            {
                area = max(area, base * w);
            }
        }
        cout << area << endl;
    }
    return 0;
}