#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        ll a[n] ;
        for(ll i = 0 ; i < n ; ++i)
        {
            cin >> a[i] ;
        }

        ll k = 0 ;
        ll flag = 0 ;

        ll sum = 0;

        for(ll i = 0 ; i < n ; ++i)
        {
            sum += a[i] ;
        }

        for(ll i = 0 ; i < n-1 ; ++i)
        {
            if(a[i] > i)
            {
                k = a[i]  - i ;
                a[i+1] += k ;
                a[i] = a[i] - k ;
            }
        }

        for(ll i = 1 ; i < n ; ++i)
        {
            if(a[i] <= a[i-1])
            {
                flag = 1 ;
                break ;
            }
        }

        if(flag == 1)
        {
            cout<<"NO"<<endl ;
        }
        else
        {
            cout<<"YES"<<endl ;
        }
    }
    return 0;
}



// ANOTHER APPROACH

/* 
int main()
{
    
    ll t ;
    cin >> t;
    while (t--)
    {
        ll n, i, flag = 0;
        cin >> n;
        ll a[n], sum = 0;
        fr(i, 0, n)
        {
            cin >> a[i];
            sum += a[i];
            if (sum < i * (i + 1) / 2)
                flag = 1;
        }
        if (flag == 0)
            cout << "YES" <<endl ;
        else
            cout << "NO" << endl ;
    }
}
*/