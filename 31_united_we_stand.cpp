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

        vector<long> a(n) ;
long mx = 0 ;
        for(int i = 0 ; i < n ; ++i)
        {
            cin >> a[i] ;
            mx = max(mx , a[i]) ;
        }

        vector<long> first ;
        vector<long> second ;

        for(int i = 0 ; i < n ; ++i)
        {
            if(mx == a[i])
            {
                second.push_back(a[i]) ;
            }
            else
            {
                first.push_back(a[i]) ;
            }
        }

        if(first.size() == 0)
        {
            cout<<"-1"<<endl ;
            continue ;
        }

        cout<<first.size() <<" "<<second.size()<<endl ;

        for(auto it : first)
        {
            cout<<it<<" " ;
        }
        cout<<endl ;

        for(auto it : second)
        {
            cout<<it<<" " ;
        }
        cout<<endl ;
    }
}