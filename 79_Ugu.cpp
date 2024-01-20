#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        string a;
        cin >> a;

        long long ans = 0;
        long long flag = 0;
        for (long long i = 1; i < n; i++)
        {
            if (a[i] != a[i - 1])
            {
                if (flag == 0 && a[i] == '0')
                {
                    flag = 1;
                    ans++;
                }
                else if (flag == 1)
                {
                    ans++;
                }
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
