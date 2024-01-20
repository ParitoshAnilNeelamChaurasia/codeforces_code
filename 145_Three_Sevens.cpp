#include <iostream>
#include <vector>
#include <map>
using namespace std;

void solve()
{
    // Read the number of days for the lottery
    int m;
    cin >> m;

    // Map to store participants for each day
    map<int, vector<int>> mp;

    // Read participant numbers for each day and store them in the map
    for (int i = 0; i < m; ++i)
    {
        int n;
        cin >> n; // Number of participants for the current day
        for (int j = 0; j < n; ++j)
        {
            int a;
            cin >> a;           // Read participant number
            mp[i].push_back(a); // Store participant for the current day
        }
    }

    // Vectors to store winners and keep track of selected numbers
    vector<int> ans(m) ; 
    vector<int> done(50001);  // person executed its last lottery

    // Determine winners for each day starting from the last day to the first
    for (int i = m - 1; i >= 0; --i)
    {
        for (auto k : mp[i])
        {
            if (done[k] == 0)
            {
                ans[i] = k;  // Assign the first occurrence of a number as the winner
                done[k] = 1; // Mark the number as used
            }
            else
            {
                done[k] = 1; // If the number has already won, mark it as used
            }
        }
    }

    // Check if there's any day without a winner
    for (auto x : ans)
    {
        if (x==0)
        {
            cout << -1 << endl; // Print -1 if there's no solution
            return;
        }
    }

    // Print the winners for each day
    for (auto x : ans)
    {
        cout << x << " ";
    }
    cout << endl;
}

int main()
{
    // Read the number of test cases
    int t;
    cin >> t;

    // Iterate through each test case
    while (t--)
    {
        solve(); // Solve the current test case
    }
    return 0;
}
