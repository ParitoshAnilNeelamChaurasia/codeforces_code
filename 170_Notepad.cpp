// https://codeforces.com/problemset/problem/1766/B


/*

check only 2 length substring -> if it occurs -> print "YES"
   
else print "NO"
   

//    but no overlapping occurs  -> center character must not overlapped


*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    unordered_map<string, int> mp;

    string ans = "NO";
    string s1;
    for (int i = 0; i < n - 1; ++i)
    {
        s1 = s[i];

        s1 += s[i + 1];

// storing first character in map -> if substring of size >= 2 occurs
        if (mp.find(s1) == mp.end())
        {
            mp[s1] = i;
        }
        else
        {
            // overlapping doen't occurs
            if (mp[s1] != i - 1)
            {
                ans = "YES";
                break ;
            }
        }
    }
        cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
}