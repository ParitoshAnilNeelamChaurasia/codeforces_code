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

        string s;

        cin >> s;

        vector<int> a(27);
        int count = 0;
        for (int i = 0; i < n; ++i)
        {
            a[s[i] - 'A']++;

            if (a[s[i] - 'A'] == (s[i] - 'A' + 1))
            {
                count++;
            }
        }
        cout << count << endl;
    }
}