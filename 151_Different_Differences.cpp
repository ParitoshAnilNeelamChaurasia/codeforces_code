// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// int main()
// {
//     int t ;
//     cin >> t;

//     while(t--)
//     {
//         int k , n ;

//         cin >> k >> n;

//         int j = 1;
//         int diff = 1;

//         for (int i = 1; i <= k; i++)
//         {
//             cout << j << " ";

//             if (n - (j + diff) >= (k - i - 1))
//             {
//                 j = j + diff;
//                 diff++;
//             }
//             else
//             {
//                 j++;
//             }
//         }

//         cout << "\n";
//     }
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        int n;
        cin >> k >> n;

        int ans = 1 ;
        int diff = 1 ;
        for(int i = 1; i <= k ; ++i)
        {
            cout<<ans<<" " ;

            // checking is it possible -> 
            if(n - (ans + diff) >= (k - i -1))
            {
                ans = ans + diff ;
                diff++ ;
            }
            else
            {
                ans++ ;
            }
        }
        cout<<endl ;
    }
}