#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    int t;
    cin >> t; // Number of test cases

    while (t--)
    {
        string a, b;
        cin >> a >> b; // Input strings s and t

        sort(b.begin(), b.end()); // Sorting string t

        if (b[0] == 'a' && b.size() > 1)
        {
            cout << "-1"; // If 'a' is present in t and t has more than one character, output -1
        }
        else if (b[0] == 'a' && b.size() == 1)
        {
            cout << "1"; // If 'a' is the only character in t, output 1
        }

        // b[0] != 'a'  -> no 'a' present
        else
        {
            ll ans = 1;
            for (ll i = 1; i <= a.size(); i++)
            {
                ans =ans * 2; // Calculate the number of different strings that can be formed by replacing 'a' in s with t
            }
            cout << ans; // Output the calculated number of strings
        }
        cout << endl;
    }
}
