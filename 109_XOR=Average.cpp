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
// n = odd
        if (n % 2 != 0)
        {
            for (int i = 0; i < n; ++i)
            {
                cout << "1 ";
            }
            cout << endl;
        }

// n = even
        else
        {
            cout << "1 3 ";
            if (n > 2)
            {
                for (int i = 0; i < n - 2; ++i)
                {
                    cout << "2"
                         << " ";
                }
                cout << endl;
            }
        }
    }
    return 0;
}