#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n ;             // initial position
        int k ;             // desirable absolute diference
        cin >> n >> k ;

        int count = 0 ;

        count += max(0,k-n) ;

        n = n + count ;

        if(k%2 != 0)
        {
            if(n % 2 == 0)
            {
                count++ ;
            }
        }
        else if(k%2 == 0)
        {
            if(n%2 != 0)
            {
                count++ ;
            }
        }
        cout<<count<<endl ;

        




    }
    return 0;
}