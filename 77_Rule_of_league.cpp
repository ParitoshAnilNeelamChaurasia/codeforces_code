#include <iostream>
using namespace std;

void solve(int temp , int x)
{
    int count = 1 ;
    while(temp--)
    {
        for(int i = 1 ; i <= x ; ++i)
        {
            cout<<count<<" " ;
        }
        if(count == 1)
        {
            count++ ;
        }
        count = count + x ;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n ;
        int x ;
        int y ;

        cin >> n >> x >> y ;

        int matches = n-1 ;

        if(x == 0 && y == 0)
        {
            cout<<-1<<endl ;
        }

        else if(x > 0 && y > 0)
        {
            cout<<-1<<endl;
        }

        else
        {
            if(x == 0)
            {
                swap(x,y) ;
            }
            if(matches % x == 0)
            {
                int temp = matches/x ;
                solve(temp , x) ;
            }
            else
            {
                cout<<-1 ;
            }
            cout<<endl ;
        }

        

    }
    return 0;
}