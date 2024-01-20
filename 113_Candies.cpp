#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int t ;
    cin >> t ;

    while(t--)
    {
        long long n ;
        cin >> n ;

        int x ;

        for(int k=2 ; k <= 40 ; ++k)
        {
            int denominator = pow(2,k) - 1 ;
            
            // n divisible by denominator
            // get our answer

            if(n % denominator != 0)
            {
                continue; 
            }
            else
            {
            x = n/denominator ;
            break ;
            }

        }
        cout<<x<<endl ;
    }
}