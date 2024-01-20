#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int l , r ;
    cin >> l >> r ;

    int maxLuck = 0 ;
    int ans = l ;

    for(int i = l ; i <= r ; ++i)
    {
        int num = i ;
        int min_digit = 9 ;
        int max_digit = 0 ;

        while(num > 0)
        {
            int digit = num%10 ;
            min_digit = min(min_digit , digit) ;
            max_digit = max(max_digit , digit) ;
            num = num/10 ;
        }
        int curr = max_digit - min_digit ;

        if(curr > maxLuck)
        {
            maxLuck = curr ;
            ans = i ;
        }
        if(maxLuck == 9)
        {
            break ;
        }
    }

    cout<<ans<<endl ;

}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve() ;
    }
    return 0;
}