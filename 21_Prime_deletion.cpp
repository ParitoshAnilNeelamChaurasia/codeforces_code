#include<bits/stdc++.h>
using namespace std ;

/* 
only to find -> 1 or 3
 */
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        string s ;
        cin >> s ;

        string t = "" ;

        for(int i = 0 ; i < 9 ; ++i)
        {
            if(s[i] == '1')
            {
                t += '1' ;
            }
            else if(s[i] == '3')
            {
                t += '3' ;
            }
        }
        cout<<t<<endl ;
    }
}