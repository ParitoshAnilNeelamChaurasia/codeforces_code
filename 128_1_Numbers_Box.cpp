#include <bits/stdc++.h>
using namespace std;

#define ll long long 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n][m];
        int neg = 0;
        ll s = 0;
        int mn = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
                if (a[i][j] < 0)
                {
                    neg++;
                }
                // to keep the track of minimum element
                mn = min(mn, abs(a[i][j]));

                // adding absolute value of all the elements
                s = s + abs(a[i][j]);
            }
        }

        if (neg % 2 == 0)
            cout << s << endl;
// 1 minus element left -> transfer -ve sign to minimum element

// we have to subtract 2 times -> because absolute value is added 

// (1) from absolute value sub the value
// (2) subtract the original value
        else
            cout << s - 2 * mn << endl;   
    }
}