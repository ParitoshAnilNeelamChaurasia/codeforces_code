#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s ;
        cin >> s ;

        char ch = '0' ;

        for(int i = 0 ; i < s.size() ; ++i)
        {
            if(s[i] == '0' || s[i] == '1')
            {
                ch = s[i] ;
            }
            else if(s[i] == '?')
            {
                s[i] = ch ;
            }
        }
        cout<<s<<endl ;
    }
    return 0;
}
