// https://codeforces.com/problemset/problem/1265/A

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
        
        int n = s.size() ;
        
        bool flag = true ;
        
        for(int i = 0 ; i < n ; ++i)
        {
            if(s[i] == s[i+1] && s[i] != '?')
            {
                flag = false ;
                break ;
            }
            
            else if(s[i] == '?')
            {
                if(s[i+1] != 'a' && s[i-1] != 'a')
                {
                    s[i] = 'a' ;
                }
                else if(s[i-1] != 'b' && s[i+1] != 'b')
                {
                    s[i] = 'b' ;
                }
                else
                {
                    s[i] = 'c' ;
                }
            }
        }
        
        if(flag == false)
        {
            cout << -1 << endl ;
        }
        
        else
        {
            for(int i = 0 ; i < n ; ++i)
            {
                cout << s[i] ;
            }
            cout << endl ;
        }
    }
    
}