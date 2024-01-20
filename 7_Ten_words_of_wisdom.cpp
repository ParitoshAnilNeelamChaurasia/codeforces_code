#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        int n ;

        cin >> n ;
        
        int ans = 0 ;
        int final_ans ;

        for(int i = 1 ; i <= n ; ++i)
        {
            int p , q ;
            cin >> p >> q ;

            if(p <= 10)
            {
                if(q > ans)
                {
                    ans = q ;
                    final_ans = i ;
                }
            }
        }
cout<<final_ans<<endl ;
    }
}