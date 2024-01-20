#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        int ans = 1;

        if (s[0] == '?')
        {
            ans = 9;
        }

        else if (s[0] == '0')
        {
            cout << 0 << endl;
            continue ;
        }

        for (int i = 1; i < n; ++i)
        {
            if (s[i] == '?')
            {
                ans =  ans * 10;
            }
        }
        cout << ans << endl;
    }
        return 0 ;
}