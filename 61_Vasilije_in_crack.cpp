#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n ;
        long long int k ;
        long long int x ;

        cin >> n >> k >> x ;

        long long min_sum = k*(k+1)/2 ;

        long long total_sum = n*(n+1)/2 ;

        long long max_sum = total_sum - ((n-k) * (n-k+1))/2 ;

        if(x >= min_sum && x <= max_sum)
        {
            cout<<"YES"<<endl  ;
        }

        else
        {
            cout<<"NO"<<endl  ;
        }


        
    }
}