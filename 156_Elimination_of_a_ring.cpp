// https://codeforces.com/problemset/problem/1761/B

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
        for(int i = 0 ; i < n ; ++i)
        {
            cin >> a[i] ;
        }
        int count = 0 ;
       for(int i = 0 ; i < n ; ++i)
       {
        if(a[(i-1+n) % n] != a[(i+1)%n])
        {
            count++ ;
            break ;
        }
       }

       if(count == 0)
       {
        cout<<n/2+1<<endl ;
       }
       else
       {
        cout<<n<<endl ;
       }
    }
    return 0;
}