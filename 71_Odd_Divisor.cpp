#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long  n ;
        cin >> n ;

        long long  temp = n & (n-1) ;
        if(temp == 0)
        {
            cout<<"NO"<<endl ;
        }
        else
        {
            cout<<"YES"<<endl ;
        }

    }
    return 0;
}