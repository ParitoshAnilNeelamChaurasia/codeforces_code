

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t, n, k, i, j;

    cin >> t;

    while(t--)
    {
        cin >> n >> k;

        i = n;
        j = 1;

        while (i >= j)
        {
            cout << i << " ";
            i--;

            if (i >= j)
            {
                cout << j << " ";
                j++;
            }
        }
        cout << "\n";
    }
}