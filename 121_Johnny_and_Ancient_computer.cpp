#include<bits/stdc++.h>
using namespace std ;

#define ll long long
int main()
{
    int t;
    cin >> t ;
    while(t--)
    {
        ll a , b ;
        cin >> a >> b ;
        
        ll ans = 0 ;
        
        if(a == b)
        {
            cout<<0<<endl ;
        }
        else
        {
            if(a < b)
            {
                swap(a,b) ;
            }
            
            while(a > b)
            {
                if(a/8 >= b && a%8 == 0)
                {
                    ans = ans+1 ;
                    a = a/8 ;
                }
                else if(a/4 >= b && a%4 == 0)
                {
                    ans = ans + 1 ;
                    a = a/4 ;
                }
                else if(a/2 >= b && a%2 == 0)
                {
                    ans = ans + 1 ;
                    a = a/2 ;
                }
                else
                {
                    break ;
                }
            }
            
            if(a == b)
            {
                cout<<ans<<endl ;
            }
            else
            {
                cout<<"-1"<<endl ;
            }
        }
    }
}