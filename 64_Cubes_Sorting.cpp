#include <iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;

        long long a[n] ;
        for(int i = 0 ; i < n ; ++i)
        {
            cin >> a[i] ;
        }

        long long flag = 0 ;

        for(long long i = 0 ; i < n-1 ; ++i)
        {
            if(a[i] <= a[i+1])
            {
                flag = 1 ;
                // break ;
            }
        }
        if(flag)
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