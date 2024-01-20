#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        int n ;    // no. of  passengers
        int m ;    // 'm' -> no. of steps
        int k ;    // height diff b/w neighbouring steps
        int H ;    // Vlad's height

        cin >> n >> m >> k >> H ;
        
        // height of persons
        vector<int> h(n) ;
        for(int i = 0 ; i < n ; ++i)
        {
            cin >> h[i] ;
        }
        
        int count = 0 ;

        for(int i = 0 ; i < n ; ++i)
        {
            int x = abs(H-h[i]) ;
            if(x%k == 0)
            {
                if(x/k < m && (x/k != 0))
                {
                    count++ ;
                }
            }
        }
cout<<count<<endl ;
    }
}