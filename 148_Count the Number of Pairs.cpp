
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
   
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        int k;
        cin >> n >> k;

        string s;
        cin >> s;

        int lower[26];
        int upper[26];

        for (int i = 0; i < 26; i++)
        {
            lower[i] = upper[i] = 0;
        }

        for (int i = 0; i < n; i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                lower[s[i] - 97]++;
            }
            else
            {
                upper[s[i] - 65]++;
            }
        }

        int ans = 0;
        int extra = 0;

        for (int i = 0; i < 26; i++)
        {
            ans = ans + min(lower[i], upper[i]);
            lower[i] = abs(lower[i] - upper[i]);
            extra += (lower[i] / 2);
        }

        ans = ans + min(k, extra);

        cout << ans << "\n";
    }
}