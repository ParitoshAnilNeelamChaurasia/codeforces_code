#include <bits/stdc++.h>
using namespace std;


#define ll long long


int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        string a[8];
        for (ll i = 0; i < 8; i++)
        {
            cin >> a[i];
        }


        string ans = "-1";

        
        for (ll i = 0; i < 8; i++)
        {
            ll red = 0;

            ll blue = 0;

            for (ll j = 0; j < 8; j++)
            {
                if (a[i][j] == 'R')
                    red++;
            }

            if (red == 8)
            {
                ans = "R";
                break;
            }
        }

// either 1 row is all "R" or "B"
//      OR
// either 1 col is all "R" or "B"
        if (ans == "R")
        {
            cout << ans << endl ;
        }
        else
        {
            cout << "B" << endl ;
        }
    }
}