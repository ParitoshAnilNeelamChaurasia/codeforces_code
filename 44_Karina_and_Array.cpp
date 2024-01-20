#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<long long int > a(n);
        for (long int i = 0; i < n; ++i)
            cin >> a[i];

        sort(a.begin(), a.end());

        // int mx = max(a[0]*a[1] , a[n-1]*a[n]) ;
        cout << max(a[0] * a[1], a[n - 1] * a[n - 2]) << endl; // Corrected the indices
    }

    return 0; // Added return statement
}
