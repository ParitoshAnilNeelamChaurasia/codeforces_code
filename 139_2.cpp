#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t; // Number of test cases

    while (t--) // Loop over each test case
    {
        int n, r, b;
        cin >> n >> r >> b; // Number of matches, wins for Team Red, wins for Team Blue

        int partition = b + 1;                            // Define the number of elements in each partition
        int repetation = (r + partition - 1) / partition; // Calculate the repetition count based on red and blue wins

        string ans; // Create an empty string to store the final match outcome

        // Construct the initial pattern of matches with Red winning 'r' times and Blue winning 'b' times
        for (int i = 0; i < r; ++i)
        {
            ans += 'R'; // Add a match won by Team Red
            if (i % repetation == repetation - 1 && b > 0)
            {
                ans += 'B'; // Add a match won by Team Blue if conditions are met and there are remaining wins for Team Blue
                b--;        // Decrement the count of remaining wins for Team Blue
            }
        }

        // Add additional matches won by Team Blue between consecutive matches won by Team Red if necessary
        for (int i = 0; i < ans.size(); ++i)
        {
            cout << ans[i]; // Print the current match outcome

            // Add a match won by Team Blue if conditions are met and there are remaining wins for Team Blue
            if (b > 0 && ans[i] == 'R' && i + 1 < ans.size() && ans[i + 1] == 'R')
            {
                cout << 'B'; // Print a match won by Team Blue
                b--;         // Decrement the count of remaining wins for Team Blue
            }
        }

        cout << '\n'; // Output a newline after printing the match outcome for each test case
    }
    return 0;
}
