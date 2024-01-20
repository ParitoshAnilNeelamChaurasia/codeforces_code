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

        int count_0 = 0;
        int count_1 = 0;

        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i] == '0')
            {
                count_0++;
            }
            else
            {
                count_1++;
            }
        }

        // alice ->DA
        // NET -> no
        int mn = 0;
        mn = min(count_0, count_1);

        if (mn % 2 == 0)
        {
            cout << "NET" << endl;
        }
        else
        {
            cout << "DA" << endl;
        }
    }
}