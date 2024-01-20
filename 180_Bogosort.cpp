// https://codeforces.com/problemset/problem/1312/B

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n) ;
        for(int i = 0 ; i < n ; ++i)
        {
            cin >>  a[i] ;
        }
        
        sort(a.begin() , a.end()) ;

        reverse(a.begin(),a.end()) ;

        for(int i = 0 ; i < n ; ++i)
        {
            cout << a[i]<< " " ;
        }
        cout<<endl ;
    }
    return 0;
}