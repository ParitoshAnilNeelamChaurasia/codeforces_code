#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n;
    cin >> n;

    vector<long long > a(n);
    vector<long long > b(n);
    
    ll sum_a = 0 ;
    ll sum_b = 0 ;
    for(int i = 0 ; i < n ; ++i)
    {
        cin >> a[i] ;
        sum_a += a[i] ;
    }

    for(int i = 0 ; i < n ; ++i)
    {
        cin >> b[i] ;
        sum_b += b[i] ;
    }

    sort(a.begin() , a.end()) ;
    sort(b.begin() , b.end()) ;

    cout<< min(sum_a + n*b[0] , sum_b + n*a[0]) << endl ;
       
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
