// https://codeforces.com/contest/1921/problem/B

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

        string s;
        cin >> s;

        string t;
        cin >> t;
        int remove = 0;
        int add = 0;
        for (int i = 0; i < n; ++i)
        {
            if (s[i] == '1' && t[i] == '0')
            {
                remove++;
            }

            if (t[i] == '1' && s[i] == '0')
            {
                add++;
            }
        }

        int mx = max(remove, add);

        cout << mx << endl;
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

//         string s;
//         cin >> s;

//         string f;
//         cin >> f;

//         int count_one_s = 0;
//         for (int i = 0; i < n; ++i)
//         {
//             if (s[i] == '1')
//             {
//                 count_one_s++;
//             }
//         }

//         int count_one_f = 0;

//         for (int i = 0; i < n; ++i)
//         {
//             if (f[i] == '1')
//             {
//                 count_one_f++;
//             }
//         }

//         if (n == 1)
//         {
//             if (count_one_f == count_one_s)
//             {
//                 cout << 0 << endl;
//             }
//             else
//             {
//                 cout << 1 << endl;
//             }
//         }

//         //  n != 1

//         // s -> f
//         else
//         {
//             int count = 0;
//             if (count_one_f == count_one_s)
//             {
//                 for (int i = 0; i < n; ++i)
//                 {
//                     if (s[i] == f[i])
//                     {
//                         count = 0;
//                     }
//                     else
//                     {
//                         count = count_one_f;
//                     }
//                 }
//             }
//             else if (count_one_s < count_one_f)
//             {
//                 if (count_one_s == 0)
//                 {
//                     count = count_one_f;
//                 }
//                 else if (count_one_s != 0)
//                 {
//                     int ex = abs(count_one_f - count_one_s);

//                     int div = ex / 2;

//                     count = count + ex + div;
//                 }
//             }

//             else if (count_one_s > count_one_f)
//             {
//                 int extra = abs(count_one_f - count_one_s);
//                 count = count + extra + 1;
//             }
//             cout << count << endl;
//         }
//     }
// }