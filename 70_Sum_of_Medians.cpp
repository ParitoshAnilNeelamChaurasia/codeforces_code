#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n ;
        int k ;
        cin >> n >> k;

        long long int sum = 0 ;
        int m = n*k ;

        long long int a[m] ;
        for(int i = 0 ; i < m ; ++i)
        {
            cin >> a[i] ;
        }

        // n == odd

        if(n%2 != 0)
        {
            int c = 0 ;
            int med = (n+1)/2 ;

            while(c != k)
            {
                sum += a[m-med] ;
                m = m - med ;
                c++ ;
            }
        }
        // n == even
        else
        {
            int c = 0 ;
            int med = (n/2) ;

            while(c != k)
            {
                sum = sum + a[m - med - 1] ;
                m = m - med - 1 ;
                c++ ;
            }
        }
        cout<<sum<<endl ;
    }
    return 0;
}