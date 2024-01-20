#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;

        ll z = a * b;

        ll x = a;

        ll y = z - x;
        if(b == 1)
        {
            cout<<"NO"<<endl ;
        }

        else 
        {
            cout<<"YES"<<endl ;

            if(x == y)
            {
                cout << x << " " << 2*z-x << " " << 2*z << endl ;
            }
            else
            {
                cout << x <<" "<<y<<" "<<z << endl ;
            }
        }

        
    }
}