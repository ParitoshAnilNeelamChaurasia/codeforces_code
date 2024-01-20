#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        int n ;
        int k ;
        int x ;

        cin >> n >> k >> x ;  // k -> mexvalue

        if(n < k || x+1 < k)
        {
            cout<<-1<<endl ;
        }

        else
        {
            int ans = 0 ;

            for(int i = 0 ; i < k ; ++i)
            {
                ans = ans + i ;
            }
            if(x == k)
            {
                x = x-1 ;
            }

            for(int i= 0 ; i < (n-k) ; ++i)
            {
                ans = ans + x ;
            }
        cout<<ans<<endl ;
        }


    }
}