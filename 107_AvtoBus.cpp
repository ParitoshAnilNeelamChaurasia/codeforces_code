#include <iostream>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t; // Taking the number of test cases

    while (t--)
    {
        ll n;
        cin >> n; // Taking the total number of wheels for a test case

        // Checking if the number of wheels is odd or less than 4
        if (n % 2 != 0 || n < 4)
            cout << -1 << endl; // No valid configuration of buses, print -1
        else
        {
            ll mn, mx;
            int ans = 0;

            // Calculating the minimum number of buses
            mn = n / 6; // Dividing by 6 (buses with 6 wheels)
            ll num = n % 6; // Getting the remaining wheels

            if (num != 0)
                mn++; // Incrementing if there are remaining wheels

            // Calculating the maximum number of buses
            mx = n / 4; // Dividing by 4 (buses with 4 wheels)

            // Outputting the minimum and maximum number of buses
            cout << mn << " " << mx << endl;
        }
    }
    return 0;
}

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         long long n;
//         cin >> n;

//         if (n % 4 != 0 && n % 6 != 0 && n % 10 != 0)
//         {
//             cout << -1 << endl;
//         }

//         else
//         {
//             long long mn = 0;
//             long long mx = 0;
//             if (n == 4 || n == 6)
//             {
//                 cout << 1 << " " << 1 << endl;
//             }

//             if (n % 6 == 0)
//             {
//                 mn = n / 6;
//             }

//             else
//             {
//                 long long rem = n % 6;
//                 if (rem % 2 == 0)
//                 {
//                     mn = n / 6 + 1;
//                 }
//             }

//             cout << mn << " " << n / 4 << endl;
//         }
//     }
//     return 0;
// }