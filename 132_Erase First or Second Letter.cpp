#include <iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        
        string s ;
        cin >> s ;
        set<int> st ;
        
        long ans = 0 ;

        for(int i = 0 ; i < n ; ++i)
        {
            st.insert(s[i]) ;
            ans = ans + st.size() ;
        }
        cout<<ans<<endl ;
    }
    return 0;
}