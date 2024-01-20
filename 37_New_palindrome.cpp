#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s ;
        cin >> s ;

        int n = s.size() ;

        map<char,int> mp ;

        for(int i = 0 ; i < n/2 ; ++i)
        {
            mp[s[i]]++ ;
        }

        if(mp.size() >= 2)
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