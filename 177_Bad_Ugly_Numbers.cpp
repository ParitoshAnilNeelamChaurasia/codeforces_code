// https://codeforces.com/contest/1326/problem/A

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
        
        string s ;

// using one digit
        if(n == 1)
        {
            cout << -1 << endl ;
        }
        else
        {
            n-- ;
            cout << 2 ;
            for(int i = 0 ; i < n ; ++i)
            {
                cout << 3 ;
            }
            cout << endl ;
        }

    }
}