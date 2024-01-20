#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t; // Taking the number of test cases

    while (t--)
    { // Loop through each test case
        int n, k;
        cin >> n >> k; // Taking input for array size 'n' and divisor 'k'

        vector<int> a(n + 1);        // Initializing a vector 'a' of size 'n + 1' for 1-based indexing
        for (int i = 1; i <= n; ++i) // Loop to input the elements into array 'a'
            cin >> a[i];

        vector<int> ans; // Vector to store the final output indices

        // Map to store remainders as keys and corresponding indices as values in descending order
        map<int, vector<int>, greater<int>> mp;

        for (int i = 1; i <= n; ++i)
        { // Loop through the elements of array 'a'
            if (a[i] % k == 0)
            {
                ans.push_back(i); // If element is divisible by 'k', store its index in 'ans'
            }
            else
            {
                mp[a[i] % k].push_back(i); // If not divisible, store index in map based on remainder
            }
        }

        // Gathering indices from the map in descending order of remainder
        for (auto it : mp)
        {
            for (auto ind : it.second)
            {
                ans.push_back(ind); // Storing indices from map in 'ans' vector
            }
        }

        // Output the indices stored in 'ans' representing the order based on divisibility
        for (auto it : ans)
        {
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}
