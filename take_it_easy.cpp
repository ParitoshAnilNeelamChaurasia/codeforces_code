#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        int n ;
        cin >> n ;

        int a[n] ;
        for(int i = 0 ; i < n ; ++i)
        {
            cin >> a[i] ;
        }
        int sum = 0 ;
        for(int i = 0 ; i < n ; ++i)
        {
            sum += a[i] ;
        }

        if(sum % n != 0)
        {
            cout<<"no"<<endl ;
        }

        else
        {
            sum = 0 ;
            for(int i = 0 ; i < n ; ++i)
            {
                a[i] = a[i]/2 ;
                sum += a[i] ;
            }
            if(sum % n == 0)
            {
                cout<<"Yes"<<endl ;
            }
            else
            {
                cout<<"No"<<endl ;
            }
        }

    }
}