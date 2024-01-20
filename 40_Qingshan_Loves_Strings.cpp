#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n ; // s
        int m ; // t
        cin >> n >> m ;

        string s ;
        cin >> s ;

        string t ;
        cin >> t ;

        if((s[0] == '1' && t[0] == '0') || (s[0] == '0' && t[0] == '1'))
        {
            cout<<"Yes"<<endl ;
        }
bool found = true ;
        for(int i = 0 ; i < m ; ++i)
        {
            if((t[i]=='0' && t[i+1]=='0') || (t[i]=='1' && t[i+1]=='1'))
            {
                found = false ;
            }
        }

        for(int i = 0 ; i < n ; ++i)
        {
                   
        }


    }
    return 0;
}