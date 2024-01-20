#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n; // length of string
        int k ;
        cin >> n >> k;

        string s ;
        cin >> s ;
        
        map<char,int> mp ;

        for(auto it : s)
        {
            mp[it]++ ;
        }
int count = 0 ;

        for(auto it : mp)
        {
            if(it.second % 2 != 0)
            {
                count++ ;
            }
        }

        if(k >= n)
        {
            cout<<"NO"<<endl ;
        }
        else if(k >= count-1)
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