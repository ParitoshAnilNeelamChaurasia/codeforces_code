#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll x, y;
        cin >> x >> y;

        ll a, b;
        cin >> a >> b;
        
        ll total = 0 ;

// so that x is always smaller then y
        if(x > y)
        {
            swap(x,y) ;
        }
// to make x,y equal
        total += a*(y-x) ;

// cost of 2*a < b -> 'a' as the main money
        if(2*a < b)
        {
            total += x*(2*a) ;
        }
        // else 'b' money spended
        else
        {
            total += x*(b) ;
        }

        cout<<total<<endl ;



    }
    return 0;
}