// https://codeforces.com/problemset/problem/1800/C1

#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        long long  n ;
        cin >> n ;
        
        vector<long long> a(n) ;
        for(long long i = 0 ; i < n ; ++i)
        {
            cin >> a[i] ;
        }
        
        priority_queue<long long > pq ;
        
        long long ans = 0 ;
        
        for(long long i = 0 ; i < n ; ++i)
        {
            if(a[i] == 0)
            {
                if(pq.size() > 0)
                {
                ans = ans + pq.top() ;
                pq.pop() ;
                }
            }
            else
            {
                pq.push(a[i]) ;
            }
        }
        cout<<ans<<endl ;
    }
}