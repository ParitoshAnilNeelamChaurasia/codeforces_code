#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ll t;
    cin >> t; // Read the number of test cases

    while (t--)
    {
        ll n;
        cin >> n; // Read the number for this test case

        int ans = 0; // Counter to keep track of the number of moves required

        bool flag = 1; // Flag to indicate if reaching 1 is possible

        // Loop to perform operations until n becomes 1 or is impossible to reach 1
        while (n > 1)
        {
            if (n % 6 == 0)
            {
                n = n / 6; // Divide n by 6 if it's divisible
            }
            else if ((n * 2) % 6 == 0)
            {
                n = n * 2; // Multiply n by 2 if it results in a number divisible by 6
            }
            else
            {
                flag = false; // If neither operation is possible, update flag and break
                break;
            }
            ans++; // Increment the count of moves taken
        }

        if (flag == 1)
        {
            cout << ans << endl; // Output the number of moves if reaching 1 is possible
        }
        else
        {
            cout << -1 << endl; // Output -1 if it's impossible to reach 1
        }
    }
    return 0;
}


/*
ll cnt_2 = 0, cnt_3 = 0;

        while (n % 2 == 0)
        {
            n = n/2;
            cnt_2++;
        }

        while (n % 3 == 0)
        {
            n == n/3;
            cnt_3++;
        }

        if (n != 1 || cnt_2 > cnt_3)
            cout << -1 << endl;
        else
            cout << (cnt_3 - cnt_2) + cnt_3 << endl;
 */