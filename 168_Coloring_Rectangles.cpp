// https://codeforces.com/problemset/problem/1584/B

#include<bits/stdc++.h>
using namespace std ;


// in this we have to make a rectangles of size of 1*3 as its most feasible 
int main()
{
    int t ;
    cin >> t ;

    while(t--)
    {
        int n ;
        int m ;

        cin >> n >> m ;

        long long x = n*m ;

        if(x%3==0)
        {
            cout<<x/3<<endl ;
        }
        else 
        {
            cout<<x/3+1<<endl ;
        }
    }
}