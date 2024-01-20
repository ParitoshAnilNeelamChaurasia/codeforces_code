
// https://codeforces.com/problemset/problem/1333/A

#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int m ;
        cin >> n >> m ;
        
        for(int i = 0 ; i < n-1 ; ++i)
        {
            for(int j = 0 ; j < m ; ++j)
            {
                cout<<"B" ;
            }
            cout<<endl ;
        }

        for(int i = 0 ; i < m-1 ; ++i)
        {
            cout<<"B";
        }
        cout<<"W"<<endl ;
    }
}