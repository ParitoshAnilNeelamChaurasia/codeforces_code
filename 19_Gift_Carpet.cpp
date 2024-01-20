#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        int n ;   // row
        int m ;   // col
        cin >> n >> m ;

        char a[n][m] ;
        for(int i = 0 ; i < n ; ++i)
        {
            for(int j = 0 ; j < m ; ++j)
            {
                cin >> a[i][j] ;
            }
        }
bool found = true ;
        for(int i = 0 ; i < n ; ++i)
        {
            for(int j = 0 ; j < m ; ++j)
            {
               if(a[i][0] != 'v')
               {
                found = false ;
               }
               else
               {
                
               }
            }
        }
        if(found == true)
        cout<<"YES"<<endl ;
        else
        cout<<"NO"<<endl ;

    }
}