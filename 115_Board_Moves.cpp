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
        long long int ans = 0;
        int v = 8 ;
        for (long long int i = 1; i <= n / 2; ++i)
        {
            ans = ans + i * v;
            v = v + 8;
        }
        cout << ans << endl;
    }
    return 0;
}