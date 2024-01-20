#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a_1, b_1;
        int a_2, b_2;

        cin >> a_1 >> b_1;
        cin >> a_2 >> b_2;

        int mx_f = max(a_1, b_1);
        int mx_s = max(a_2, b_2);

        int mn_f = min(a_1, b_1);
        int mn_s = min(a_2, b_2);

        if (mx_f != mx_s)
        {
            cout << "No" << endl;
        }

        else
        {
            int mn = mn_f + mn_s;
            if (mn == mx_f)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}