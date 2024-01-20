#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n ;
    cin >> n ;

    long long a[n] ;
    for(long long i = 0 ; i < n ; ++i)
    {
        cin >> a[i] ;
    }

    long long pos = -1 ;

    for(long long i = 0 ; i < n ; ++i)
    {
        if(a[i] != 0)
        {
            pos = i ;
            break ;
        }
    }

    if(pos == -1 || pos == n-1)
    {
        cout<<0<<endl ;
        return  ;
    }

    long long sum =  0 ;
    long long zero = 0 ;

    for(long long i = pos ; i < n-1 ; ++i)
    {
        sum += a[i] ;
        if(a[i] == 0)
        {
            zero++ ;
        }
    }

    cout<<sum+zero<<endl ;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve() ;
    }
    return 0;
}