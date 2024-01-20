#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        vector<long long int> v, v1, v2;
        string s, s1;
        cin >> s;
        s1 = s;
        sort(s1.begin(), s1.end());
        if (s == s1)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << 1 << endl;
            long long int c1 = 0, c0 = 0;
            for (long long int i = 0; i < s.size(); i++)
            {
                if (s[i] != s1[i])
                {
                    if (s[i] == '1')
                    {
                        c1++;
                    }
                    else
                    {
                        c0++;
                    }
                }
            }
            for (long long int i = 0; i < s.size(); i++)
            {
                if (s[i] != s1[i] && s[i] == '1')
                {
                    v.push_back(i + 1);
                }
                else if (s[i] != s1[i] && s[i] == '0')
                {
                    v1.push_back(i + 1);
                }
            }
            cout << 2 * 1LL * (v.size()) << " ";
            for (long long int i = 0; i < v.size(); i++)
            {
                v2.push_back(v[i]);
                v2.push_back(v1[i]);
            }
            sort(v2.begin(), v2.end());
            for (long long int i = 0; i < v2.size(); i++)
            {
                cout << v2[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
