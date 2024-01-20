#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n ;
        cin >> n ;

        vector<ll> a(n) ;

        ll sum = 0 ;
        for(int i = 0 ; i < n ; ++i)
        {
            cin >> a[i] ;
            sum += a[i] ;
        }

        ll x = sum % n ;     // extra car which left after distribution

        cout<<x*(n-x)<<endl ;

    }
    return 0;
}