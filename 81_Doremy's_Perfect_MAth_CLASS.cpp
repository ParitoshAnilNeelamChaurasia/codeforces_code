#include<bits/stdc++.h>
using namespace std;

#define ll long long

// ll gcd(ll a, ll b)
// {
//     if((a%b)==0)
//     {
//         return b;
//     }
//     else
//     {
//         return gcd(b, a%b);
//     }
// }
int main()
{
    ll t ;
    
    cin >> t ;
    
    while(t--)
    {
        ll n ;
        cin>>n;
        
        ll a[n];
        
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
        }
        
        ll g = a[0];       // smallest number
        
        for(ll i=1; i<n; i++)
        {
            g = __gcd(a[i], g);
        }
        
        cout<<a[n-1]/g<<"\n";
    }
}