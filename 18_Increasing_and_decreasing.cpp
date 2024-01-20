#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        int y;
        int n; // size

        // a1 = x , an = y
        // strictly increasing

        cin >> x >> y >> n;


int count = 1 ;
        vector<int> ans;
        ans[n-1] = y ;
        ans[0] = x ;
         
       for(int i = n-2 ; i >= 1 ; --i)
       {
          ans[i] = ans[i+1] - count ;
          count++ ;
       }
        
        if((ans[1]-ans[0]) > (ans[2]-ans[1]))
        {
            for(int i = 0 ; i < n ; ++i)
            {
                cout<<ans[i]<<" " ;
            }
        }
        else
        {
            cout<<-1 ;
            cout<<endl ;
        }
        
    }
}