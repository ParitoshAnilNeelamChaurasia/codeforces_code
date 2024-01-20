#include <bits/stdc++.h>
using namespace std;

int digit_sum(int n)
{
    int sum = 0 ;
    while(n >= 0)
    {
        int last_digt = n % 10 ;
        
        sum = sum + last_digit ;

        n = n/10 ;
    }
    return sum ;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int x = digit_sum(n) ;
        if(n==0 || n==1 || n == 2 || n ==3 || n ==4 || n ==5 || n == 6 || n == 7 || n == 8 || n ==9)
        {
            cout<<n<<endl ;
        }


        else if(n==10 || n==20 || n ==30 || n==40 || n==50)
        {
            cout<<-1<<endl ;
        }
        






    }
    return 0;
}