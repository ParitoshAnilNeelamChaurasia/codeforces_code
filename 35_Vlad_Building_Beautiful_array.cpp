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

        vector<long int> a(n) ;

        for(int i = 0 ; i < n ; ++i)
        {
            cin >> a[i] ;
        }
        sort(a.begin(),a.end()) ;
bool found = false ;

// all even
        for(int i = 0 ; i < n ; ++i)
        {
            if(a[i] % 2 == 0)
            {
                found = true ;
            }
        }
// all odd 
        for(int i = 0 ; i < n ; ++i)
        {
            if(a[i] % 2 != 0)
            {
                found = true ;
            }
        }

// even and odd
        for(int i = 0 ; i < n-1 ; ++i)
        {
            int num = a[i] ;
            for(int j = i+1 ; j < n ; ++j)
            {
                 if(num %2 == 0 && a[j]%2 != 0)
                 {
                   found = false ;
                 }

                 else if(num % 2 != 0 && a[j] % 2 != 0)
                 {
                    found = false ;
                 }
                 else
                 {
                    found = true ;
                 }
            }
        }
        if(found)
        {
            cout<<"YES"<<endl ;
        }
        else
        {
            cout<<"NO"<<endl ;
        }
    }
    return 0;
}