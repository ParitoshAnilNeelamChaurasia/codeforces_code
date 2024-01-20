/* https://codeforces.com/problemset/problem/1802/B */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t ;
    cin >> t ;

    while (t--)
    {
        int n;
        cin >> n;

        int b[n];

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        int c1 = 0, c2 = 0;
        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            if (b[i] == 2)
            {
                c1 = c1 + c2;

                if (c1 > 0)
                {
                    ans = max(ans, (c1 + 2) / 2);
                }

                c2 = 0;
            }
            else
            {
                c2++;
                if (c1 == 0)
                {
                    ans = max(ans, c2);
                }
                else
                {
                    ans = max(ans, (c1 + 2) / 2 + c2);
                }
            }
        }
        cout << ans << "\n";
    }
}

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;

//         vector<int> a(n);
//         for (int i = 0; i < n; ++i)
//         {
//             cin >> a[i];
//         }

//         int ans = 0;
//         int c1 = 0; // known grnder
//         int c2 = 0; // unknown gender

//         for (int i = 0; i < n; ++i)
//         {
//             if (a[i] == 1)
//             {
//                 c1++;
//                 if (c1 != 0)
//                 {
//                     ans = max(ans, (c1 + 2) / 2);
//                 }
//                 else
//                 {
//                     ans = max(ans , 1) ;
//                 }
//             }
//              else if(a[i] == 2)
//              {
//             c1 = c1 + c2;
//                 c2++ ;

//                 if(c2 != 0)
//                 {
//                     ans = max(ans , (c1+1)/2 + c2) ;
//                 }
//                 else
//                 {
//                     ans = max(ans , c2+1) ;
//                 }
//                 c2 = 0 ;
//              }
//         }
//         cout<<ans<<endl ;
//     }
//     return 0;
// }