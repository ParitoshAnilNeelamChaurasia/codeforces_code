// https://codeforces.com/problemset/problem/1278/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string original, hash;
        cin >> original >> hash;

        bool flag = false;

        sort(original.begin(), original.end());

        int original_size = original.size(), hash_size = hash.size();

        for (int i = 0; i <= hash_size - original_size; ++i)
        {
            string temp = hash.substr(i, original_size);
            sort(temp.begin(), temp.end());
            if (original == temp)
            {
                flag = true;
                break;
            }
        }

        if (flag)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}