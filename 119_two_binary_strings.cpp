#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        
        string a, b;
        int f = 0;
        cin >> a >> b;
        for (ll i = 0; i < a.size(); i++)
        {
            if ((a[i] == '0' && b[i] == '0') && (a[i + 1] == '1' && b[i + 1] == '1'))
            {
                f = 1;
                break;
            }
        }
        if (f)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
    return 0;
}
