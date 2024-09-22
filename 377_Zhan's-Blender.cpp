// https://codeforces.com/contest/2013/problem/A

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;

const int mod = 1e9 + 7;

/* *************************************(code begins)**************************************** */

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        ll x, y;
        cin >> x >> y;

        ll mn = min(x, y);

        ll ans = 1;

        if (n % mn == 0)
        {
            cout << n / mn << endl;
        }
        else
        {
            cout<<n/mn+1<<endl ;
        }
    }
}
