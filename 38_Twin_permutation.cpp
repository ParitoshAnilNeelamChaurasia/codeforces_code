#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n) ;

        for(int i = 0 ; i < n ; ++i)
        {
            cin >> a[i] ;
        }
        
        int N = n+1 ;

        for(int i = 0 ; i < n ; ++i)
        {
            cout << N - a[i]<< " " ;
        }
        cout<<endl ;

    }
    return 0;
}