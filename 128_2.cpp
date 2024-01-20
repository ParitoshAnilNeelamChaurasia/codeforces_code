#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int m ;
        cin >> n >> m;

        int a[n][m] ;
        for(int i = 0 ; i < n ; ++i)
        {
            for(int j = 0 ; j < m ; ++j)
            {
                cin >> a[i][j] ;
            }
        }

        int neg = 0 ;
        int mn = INT_MAX ;
        int sum = 0 ;

        for(int i = 0 ; i < n ; ++i)
        {
            for(int j = 0 ; j < m ; ++j)
            {
                if(a[i][j] < 0)
                {
                    neg++ ;
                }
                
                mn = min(mn , abs(a[i][j])) ;
                sum = sum + abs(a[i][j]) ;
            }
        }

        if(neg % 2 == 0)
        {
            cout<<sum<<endl ;
        }
        else
        {
            cout<<sum - 2*mn <<endl ;
        }
    }
    return 0;
}