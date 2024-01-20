// https://codeforces.com/problemset/problem/1781/B

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

        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());
        
        vector<bool> v(n,0) ;

        for(int i = 0 ; i < n ; ++i)
        {
            if(i >= a[i])
            {
                v[i] = true ;
            }
            else 
            {
                v[i] = false ;
            }
        }

        int ans = 0 ;

        for(int i = 0 ; i < n ; ++i)
        {
            if(v[i] == true)
            {
                if(i==0)
                {
                    ans++ ;
                }
                else if(v[i-1] == false)
                {
                    ans++ ;
                }
            }
        }

        if(a[0] > 0)
        {
            ans++ ;
        }
        cout<<ans<<endl ;
    }
    return 0;
}
