#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        int a, b;

        cin >> n >> a >> b;

        string s;
        cin >> s;

        if(b > 0)
        {
            cout << (a+b)*n << endl ;
        }

        else
        {
            int ans = 0 ;
            int total = 0 ;

            for(int i = 0 ; i < n-1 ; ++i)
            {
                if(s[i] != s[i+1])
                {
                    total++ ;      
                }
            }
            total++ ;         // // Counting the last substring.

            ans = a*n + ((total/2)+1)*b ;

            cout<<ans<<endl ;
        }
    }
}