#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n ;
        cin >> n ;

        if(n > 45)
        {
            cout<<"-1"<<endl ;
            continue ;
        }

        vector<int> ans ;

        for(int i = 9 ; i >= 1 ; --i)
        {
            if(n >= i)
            {
                ans.push_back(i) ;
                n = n - i ;
            }
        }
        sort(ans.begin(),ans.end()) ;

        for(auto j : ans)
        {
            cout<<j ;

        }
        cout<<endl ;
    }

    return 0;
}
