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

        int sq = n*n ;

        if(n == 2)
        {
            cout<<-1<<endl ;
            continue ;
        }

        int count = 0 ;
        
        for(int i = 1 ; i <= sq ; ++i)
        {
            if(i % 2 != 0)
            {
                cout<<i<<" " ;
                count++ ;

                if(count == n)
                {
                    count = 0 ;
                    cout<<endl ;
                }
            }
        }

        for(int i = 1 ; i <= sq ; ++i)
        {
            if(i % 2 == 0)
            {
                cout<<i<<" " ;
                count++ ;

                if(count == n)
                {
                    count = 0 ;
                    cout<<endl ;
                }
            }
        }
    }
    return 0;
}