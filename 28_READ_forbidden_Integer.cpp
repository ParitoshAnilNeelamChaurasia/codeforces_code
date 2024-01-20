#include<bits/stdc++.h>
using namespace std ;

#define ll long long 

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
 
    ll t;
    cin >> t;
    for (ll i = 1; i <= t; i++)
    {
        ll n, k, x;
        cin >> n >> k >> x;
        if (k == 1)
            cout << "NO" << endl;
        else
        {
            if (x != 1)
            {
                cout << "YES" << endl;
                cout << n << endl;
                for (ll j = 1; j <= n; j++)
                {
                    cout << "1";
                    if (j != n)
                        cout << " ";
                    else
                        cout << endl;
                }
            }
            else
            {
                if (n % 2 == 0)
                {
                    cout << "YES" << endl;
                    cout << n / 2 << endl;
                    for (ll j = 1; j <= n / 2; j++)
                    {
                        cout << "2";
                        if (j != n / 2)
                            cout << " ";
                        else
                            cout << endl;
                    }
                }
                else
                {
                    if (k == 2)
                        cout << "NO" << endl;
                    else
                    {
                        cout << "YES" << endl;
                        cout << ((n - 3) / 2) + 1 << endl;
                        cout << "3";
                        for (ll j = 1; j <= (n - 3) / 2; j++)
                            cout << " 2";
                        cout << endl;
                    }
                }
            }
        }
    }

    return 0;
}