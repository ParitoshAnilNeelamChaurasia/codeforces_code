#include <bits/stdc++.h>
using namespace std;

#define ll long long 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a , b , c ;
        cin >> a >> b >> c ;
        
        ll first = -1 ;
        ll second = -1 ;

        if(a < c)
        {
            first = 1 ;
        }

        if(b*a > c)
        {
            second = b ;
        }

        cout<<first<<" "<<second<<endl ;


    }
    return 0;
}