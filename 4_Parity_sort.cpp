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

        vector<long int>a(n) ;
        for(long int i = 0 ; i < n ; ++i)
        {
            cin >> a[i] ;
        }

        vector<long int> odd ;

        vector<long int> even ;
        
        for(long int i = 0 ; i < n ; ++i)
        {
            if(a[i]%2==0)
            {
                even.push_back(a[i]) ;
            }
            odd.push_back(a[i]) ;
        }

        sort(even.begin() , even.end()) ;

        sort(odd.begin() , odd.end()) ;

int x = 0 ;
int y = 0 ;
        for(long int i = 0 ; i < n ; ++i)
        {
            if(a[i]%2==0)
            {
               a[i] = even[x++] ;
            }
            else
            {
                a[i] = odd[y++] ;
            }
        }

        if(is_sorted(a.begin() , a.end()))
        {
            cout<<"YES"<<endl ;
        }
        else
        {
            cout<<"NO"<<endl ;
        }
    }
}