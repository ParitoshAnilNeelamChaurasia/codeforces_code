// https://codeforces.com/problemset/problem/1359/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n , m , k ;
        cin >> n >> m >> k ;

        int each_player = n/k ;

        if(each_player >= m)
        {
            cout << m << endl ;
        }
        else
        {
            int rem = m-each_player ;

            int other = ceil(1.0*rem/(k-1)) ;

            cout << each_player - other << endl ;
        }
    }
    return 0;
}