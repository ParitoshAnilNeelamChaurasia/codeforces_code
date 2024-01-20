#include<bits/stdc++.h>
using namespace std ;

void solve()
{
    long int n ;       // number of problems
    long int k ;       // maximum allowed difference

    cin >> n >> k ;
     
     vector<long> a(n) ;
     for(int i = 0 ; i < n ; ++i)
     {
        cin >> a[i] ;
     }
     
     sort(a.begin() , a.end()) ;

     int ans = n-1 ;

     for(int i = 0 ; i < n-1 ;++i)
     {
        int count = 0 ;

        for(int j = i+1 ; j < n && a[j]-a[j-1] <= k ;++j)
        {
            count++ ;
        }
        ans = min(ans , n - count - 1) ;
        i = i+count ;

     }
      
cout<<ans<<endl ;
    



}
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        solve() ;
    }
}