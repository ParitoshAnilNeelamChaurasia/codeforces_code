#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n ;
        cin >> n ;

        string s ;
        cin >> s ;

        vector<int> prefix(n,0) ;
        vector<int> suffix(n,0) ;

        set<char> st_1 , st_2 ;

        for(int i = 0 ; i < n ; ++i)
        {
            st_1.insert(s[i]) ;
            prefix[i] = st_1.size() ;
        }

        for(int i = n-1 ; i >= 0 ; --i)
        {
            st_2.insert(s[i]) ;
            suffix[i] = st_2.size() ;
        }

        int ans = 0 ;
        int mx = 0 ;

        for(int i = 0 ; i < n-1 ; ++i)
        {
            ans = prefix[i] + suffix[i+1] ;
            mx = max(ans , mx) ;
        }
        cout<<mx<<endl ;
    }
    return 0;
}