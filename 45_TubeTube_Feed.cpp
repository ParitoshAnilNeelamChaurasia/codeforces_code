#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        int n , t ;
        cin >> n >> t;

        vector<int> a(n) ;
        for(int i = 0 ; i < n ; ++i)
        cin >> a[i] ;

        vector<int> b(n) ;
        for(int i = 0 ; i < n ; ++i)
        cin >> b[i] ;
        
        int x = -1 ;  // storing index
        int v = -1 ;  // storing value 

        for(int i = 0 ; i < n ; ++i)
        {
            if(i + a[i] <= t && v < b[i])
            {
                v = b[i] ;
                x = i+1 ;
            }
        }
        cout<<x<<endl ;
    }
}