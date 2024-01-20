#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        int n ;
        cin >> n ;

        vector<int> a(n) ;
        for(int i = 0 ; i < n ; ++i)
        {
            cin >> a[i] ;
        }
        unordered_map<int,int> mp ;

        for(auto it : a)
        {
            mp[it]++ ;
        }
bool found = true ;

        for(auto it : mp)
        {
            if(it.second == 2)
            {
               found = false ;
            }
            else
            {
                found = true ;
            }
        }

        if(found)
        {
            cout<<"YES"<<endl ;
        }
        else
        {
            cout<<"NO"<<endl ;
        }
    }
}