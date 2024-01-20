// https://codeforces.com/problemset/problem/1266/A

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t, n;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        n = s.size();
        int zero = 0, even = 0, sum = 0;

        for (int i = 0; i < n; i++)
        {
            int temp = s[i] - '0';
            sum += temp;

            // counting '0's
            if (temp == 0)
            {
                zero++;
            }

            // done to check if there are more than 2 even number possible 
            if (temp % 2 == 0)
            {
                even++;
            }
        }

        if ((sum % 3 == 0 && zero > 0) && even >= 2)
        {
            cout << "red" << endl ;
        }
        else
        {
            cout << "cyan" << endl ;
        }
    }

    return 0;
}
