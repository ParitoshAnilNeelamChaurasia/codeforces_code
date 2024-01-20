#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        int n;
        cin >> n ;
int count_one = 0 ;
int count_minus_one = 0 ;

        vector<int> a(n) ;

        for(int i = 0 ; i < n ; ++i)
        {
            cin >> a[i] ;

            if(a[i] > 0 )
            {
                count_one++ ;
            }
            else
            {
                count_minus_one++ ;
            }
        }

        int count = 0 ;

        while(count_minus_one > count_one)
        {
            count_minus_one-- ;
            count_one++ ;
            count++ ;
        }
        if(count_minus_one %2 == 1)
        {
            count++ ;
        }
        cout<<count<<endl ;
    }
}