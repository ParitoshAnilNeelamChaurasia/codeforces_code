#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        long a[n] ;
        for(int i = 0 ; i < n ; ++i)
        {
            cin >> a[i] ;
        }
        long long x = 2*a[0] - 1 ;
long long ans = 0 ;
        for(int i = 0 ; i < n ; ++i)
        {
            ans = ans+(a[i]/x) ;
            if(a[i]%x == 0)
            {
                ans-- ;
            }
        }
        cout<<ans<<endl ;

    }
    return 0;
}