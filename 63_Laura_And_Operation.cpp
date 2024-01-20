#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        int a ;
        int b ;
        int c ;

        cin >> a >> b >> c ;

        if(a==b && b==c)
        {
            cout<<1<<" "<<1<<" "<<1<<endl ;
        } 
        else
        {
            if(a > b && a > c)
            {
                cout<<1<<" "<<0<<" "<<0<<endl ;
            }
            else if(b > a && b > c)
            {
                cout<<0<<" "<<1<<" "<<0<<endl ;
            }

            else if(c > b && c > a)
            {
                cout<<0<<" "<<0<<" "<<1<<endl ;
            }

        }
    }
}