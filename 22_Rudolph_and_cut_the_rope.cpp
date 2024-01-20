#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        int n ;
        cin >> n ;  // nails

int x = 200 ;
        vector<int> a(n) ;
        vector<int> b(n) ;

        for(int i = 0 ; i < n ; ++i)
        {
            cin >> a[i] ;   // height
            cin >> b[i] ;   // 
        }

        int count = 0 ;

        for(int i = 0 ; i < n ; ++i)
        {
            if(a[i] > b[i])
            {
                count++ ;
            }
        }
cout<<count<<endl ;
    }
}