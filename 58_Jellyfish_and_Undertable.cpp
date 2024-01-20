#include<bits/stdc++.h>
using namespace std ;

void solve()
{
    long int a ;    // maximum value of bomb's timer
    long int b ;    // initial value of timer
    long int n ;    // number of tools

    cin >> a >> b >> n ;

    vector<long int> x(n) ;

    for(int i = 0 ; i < n ; ++i)
    {
        cin >> x[i] ;
    }
    
    int count = 0 ;

    for(int i = 0 ; i < n ; ++i)
    {
        if(x[i] > a)
        {
            x[i] = a ;
        }
    }
}
int main()
{
    int t ;
    cin>> t ;
    while(t--)
    {
        solve() ;
    }
}