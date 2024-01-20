#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n; // length of the array
        ll q; // number of queries
        cin >> n >> q;

        ll a[n];
        ll sum = 0;
        for (int i = 1; i <= n; ++i)
        {
            cin >> a[i];
            sum += a[i];
        }

            ll total = 0;
        while (q--)
        {
            ll l, r, k;
            cin >> l >> r >> k;

            for (int i = l ; i <= r - 1; ++i) 
            {
                a[i] = k;
            }

            for (int i = 1; i <= n; ++i)
            {
                total += a[i];
            }
        int fin = abs(total - sum) ;
        
        if(fin%2 == 0)
        {
            cout<<"NO"<<endl ;
        }
        else
        {
            cout<<"YES"<<endl ;
        }
        }


    }
    return 0;
}
