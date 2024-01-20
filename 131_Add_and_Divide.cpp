#include <iostream>
using namespace std;

#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
       ll a , b ;
       cin >> a >> b ;

// a > b
       if(b>a)
       {
        swap(a,b) ;
       }
       int count = 0 ;
       while(a >= b)
       {
        a = a/b ;
        count++ ;
       }
int count_f = 0 ;
       if(a == b)
       {
        b = b+1 ;
        count_f = 1 ;
        cout<<count + 1 + count_f<<endl ;
       }
       else
       {
       int count_s = 0 ;
        while(b < a)
        {
            b = b+1 ;
            count_s++ ;
        }
       cout<<count + count_s<<endl ;
       }







    }
    return 0;
}