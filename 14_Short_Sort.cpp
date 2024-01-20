#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int t ;
    cin >> t ;

    while(t--)
    {
        string s ;
        cin >> s ;

        
            if(s[0] == 'a' && s[1] == 'b' && s[2] == 'c')
            {
                cout<<"YES"<<endl ;
            }
            if(s[0] == 'a' && s[1] == 'c' && s[2] == 'b')
            {
                cout<<"YES"<<endl ;
            }
            if(s[0] == 'b' && s[1] == 'a' && s[2] == 'c')
            {
                cout<<"YES"<<endl ;
            }
            if(s[0] == 'b' && s[1] == 'c' && s[2] == 'a')
            {
                cout<<"NO"<<endl ;
            }
            if(s[0] == 'c' && s[1] == 'a' && s[2] == 'b')
            {
                cout<<"NO"<<endl ;
            }
            if(s[0] == 'c' && s[1] == 'b' && s[2] == 'a')
            {
                cout<<"YES"<<endl ;
            }
        
    }
}