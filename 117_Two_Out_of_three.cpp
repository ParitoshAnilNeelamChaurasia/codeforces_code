#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        map<int, int> mp;

        for (auto it : a)
        {
            mp[it]++;
        }

        vector<int> ans;

        for (auto it : mp)
        {
            if (it.second > 1)
            {
                ans.push_back(it.first);
            }
        }

        // if we don't get '2' elements having frequency more than 2
        // print -1
        if (ans.size() < 2)
        {
            cout << "-1" << endl;
            continue;
        }

        for (auto it : a)
        {
            if (it == ans[0])
            {
                ans[0] = -1; // mark it visited
                cout << "2"
                     << " ";
            }
            else if (it == ans[1])
            {
                ans[1] = -1; // mark it visited
                cout << "3"
                     << " "; // replace with 2
            }
            else
            {
                cout << "1"
                     << " ";
            }
        }
        cout << endl;
    }
    return 0;
}