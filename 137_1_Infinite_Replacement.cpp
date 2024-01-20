#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string t;
        cin >> t;

        
        int n = s.size();
        int m = t.size();

        if (m == 1)
        {
            if (t[0] == 'a')
            {
                cout << 1 << endl;
            }
            else
            {
                ll ans = (1LL << n);
                cout << ans << endl;
            }
        }
        else
        {
            if (count(t.begin(), t.end(), 'a') > 0)
            {
                cout << -1 << endl;
            }
            else
            {
                ll ans = (1LL << n);
                cout << ans << endl;
            }
        }
    }
    return 0;
}
