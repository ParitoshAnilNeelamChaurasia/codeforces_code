#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n ;
    cin >> n ;

    vector<int> a(n) , b(n,0) ;

    for(int i = 0 ; i < n ; ++i)
    {
        cin >>a[i] ;
    }

    sort(a.begin(),a.end()) ;

    int c = a[0] ;
    int p = 0 ;

    b[0] = 1 ;

    while(true)
    {
        p = lower_bound(a.begin()+p+)
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve() ;
    }
    return 0;
}
