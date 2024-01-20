#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        int b ;    // no. of bread pieces
        int c ;    // cheese slices
        int h ;    // ham slices

        cin >> b >> c >> h ;
        
        if(b > c+h)
        {
            cout<<2*(c+h)+1<<endl ;
        }
        else
        cout<<2*b-1<<endl ;
    }
}