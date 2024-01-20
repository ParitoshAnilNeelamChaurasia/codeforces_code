#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        long long int n ;      // maximum element he can choose
        long long int k ;     // distinct integers -->> sum == x
        long long int x ; 

        cin >> n >> k >> x ;
        
        long long min_sum = (k*(k+1))/2 ;

        long long total_sum = (n*(n+1))/2 ;

// ((n-k)*(n-k+1))/2 -> starting 2 elements removed
        long long max_sum = total_sum - ((n-k)*(n-k+1))/2 ;

        if(x >= min_sum and x <= max_sum)
        {
            cout<<"YES"<<endl ;
        }
         
         else
         {
            cout<<"NO"<<endl ;
         }





    }
}