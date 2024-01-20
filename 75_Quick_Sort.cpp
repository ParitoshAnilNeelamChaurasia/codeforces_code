#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int k ;
        cin >> n >> k ;

        int p[n] ;
        for(int i = 0 ; i < n ; ++i)
        {
            cin >> p[i] ;
        }

        int ans = 1 ;
        int total = 0 ;

        for(int i = 0 ; i < n ; ++i)
        {
            if(p[i] == ans)
            {
                ans++ ;
            }
            else
            {
                total++ ;
            }
        }
        int final_F = (total + k - 1)/k ;
        cout<<final_F<<endl ;
        
    }
    return 0;
}