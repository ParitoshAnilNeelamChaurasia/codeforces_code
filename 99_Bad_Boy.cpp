#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n , m ;
        int x , y ;

        cin >> n >> m >> x >> y;

        if((x == 1 && y == 1) || (x == n || y == m))
        {
            cout<<1<<" "<<1<<endl ;
            cout<<n<<" "<<m<<endl ;
        }

        else
        {
            cout<<1<<" "<<1<<endl ;
            cout<<n<<" "<<m<<endl ;
        }


    }
    return 0;
}