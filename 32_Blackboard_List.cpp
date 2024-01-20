#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;

        long long int a[n] ;
        for(long long int i = 0 ; i < n ; ++i)
        cin >> a[i] ;

        sort(a , a+n) ;

        if(a[0] < 0)
        {
            cout<<a[0]<<endl ;
        }
        else
        {
            cout<<a[n-1]<<endl ;
        }
    }
    return 0;
}