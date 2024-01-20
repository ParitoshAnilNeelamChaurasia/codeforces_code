#include<bits/stdc++.h>
using namespace std ;

#define ll long long

bool f(ll n , ll m)
{
    if(n == m)
    {
        return true ;
    }
    if(n%3 != 0)
    {
        return false ;
    }
    return (f(n/3ll , m) || f(2*(n/3ll) , m)) ;
}
int main()
{
    int t ;
    cin >> t ;
    
    while(t--)
    {
        ll n , m ;
        cin >> n >> m ;
        
        if(f(n,m) == true)
        {
            cout<<"YES"<<endl ;
        }
        else
        {
            cout<<"NO"<<endl ;
        }
        
        
    }
}