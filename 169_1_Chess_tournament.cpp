#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll ones = 0, twos = 0;

    
    char arr[n][n];
    
    for (int i = 0; i < n; ++i)
    {
        if (s[i] == '1')
        {
            ones++;
        }
        else
        {
            twos++;
        }
    }
    if (twos == 1 || twos == 2)
    {
        cout << "NO" << endl ;
    }
    else
    {
        ll x = 1;
        cout << "YES" << endl;
        for (int i = 0; i < n; i++)
        {
            x = 1;
            for (int j = i; j < n; j++)
            {
                // no one can have a match with himself
                if (i == j)
                {
                    arr[i][j] = 'X';
                    continue;
                }

                // ith  -> must win the match or tie
                if (s[i] == '1')
                {
                    arr[i][j] = '=';
                    arr[j][i] = '=';
                }

                // if ith -> value != 1
                else
                {
                    // s[j] == '2'  -->>  atleast 1 time it must win
                    if (x == 1 && s[j] == '2')
                    {
                        arr[i][j] = '+';
                        arr[j][i] = '-';
                        x = 2;
                    }

                    // first loss them a match -> then win him a match
                    else
                    {
                        arr[i][j] = '-';
                        arr[j][i] = '+';
                    }
                }
            }
        }
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                cout << arr[i][j];
            }
            cout << endl;
        }
    }
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}