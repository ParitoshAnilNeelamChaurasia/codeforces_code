// https://codeforces.com/problemset/problem/1277/A


#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>  // This includes all standard C++ libraries; it's usually better to include only what's needed.

using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        ll a = 0, ans = 0;
        vector<ll> v;

        // Loop to generate beautiful numbers from 1 to 9
        for (int i = 1; i <= 9; i++)
        {
            a = i;
            // Loop to generate multiples of the current digit (i) until INT_MAX
            while (a < 2e9)
            {
                v.push_back(a);
                a = 10 * a + i;
            }
        }

        
        sort(v.begin(), v.end());

        // Count how many beautiful numbers are less than or equal to n
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] <= n)
            {
                ans++;
            }
        }

        // Output the answer for the current test case
        cout << ans << endl;
    }

    return 0;
}
