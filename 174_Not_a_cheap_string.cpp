// https://codeforces.com/problemset/problem/1702/D

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        ll p;
        cin >> p;

        ll score = 0 ;

        map<ll,vector<ll> > mp ;

        for(ll i = 0  ; i < s.size() ; ++i)
        {
            score += s[i] - 'a' + 1 ;
            mp[s[i] - 'a' + 1] . push_back(i) ;
        }

        while (score > p)
        {
            for(ll i = 26 ; i >= 0 ; --i)
            {
                for(auto it : mp[i])
                {
                    score = score - i ;

                    s[it] = '.' ;

                    if(score <= p)
                    break ;
                }
                if(score <= p)
                break ;
            }
        }

        string ans = "" ;

        for(auto it : s)
        {
            if(it != '.')
            {
                ans = ans + it ;
            }
        }
        cout<<ans << endl ;
        
    }
    return 0;
}
