#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        long long int n ;
        cin >> n ;

        int count = 0 ;

        for(int i = 1 ; i <=100 ; ++i)
        {
            if(n%i == 0)
            {
                count++ ;
            }
            else
            {
                break ;
            }

        }
        cout<<count<<endl ;

        
    }
}