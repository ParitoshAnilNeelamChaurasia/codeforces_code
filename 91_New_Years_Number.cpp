#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long n;
        cin >> n;

        int result = n / 2020 ;

        if(result < 1)
        {
            cout<<"NO"<<endl ;
        }

        else
        {
            int last_digit = n % 2020 ;
            if(last_digit > result)
            {
                cout<<"NO"<<endl ;
            }
            else{
                cout<<"YES"<<endl ;
            }
        }

        

        // if(n > 2020)
        // {
        //     if(last_digit == 0)
        //     {
        //         while(n >= 2020)
        //         n = n - 2020 ;
        //     }
        //     else
        //     {
        //         while(n >= 2021)
        //         {
        //             n = n -2021 ;
        //         }
        //     }
        // }

        // if(n != 0)
        // {
        //     cout<<"NO"<<endl ;
        // }
        // else
        // {
        //     cout<<"YES"<<endl ;
        // }


        
    }
    return 0;
}