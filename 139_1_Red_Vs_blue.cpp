#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t; // Number of test cases

    while (t--) // For each test case
    {
        ll n, r, b;
        cin >> n >> r >> b; // Input total matches, Red wins, Blue wins

        string s = ""; // Initialize an empty string to represent match outcomes

        ll temp_r = r; // Store the initial count of Red wins

// partition  = b+1
        ll temp = (r + b) / (b + 1); // Calculate the maximum number of wins for a team

        // Calculate the remaining matches after considering maximum wins
        ll temp2 = n - (temp * (b + 1));

        // Loop through the Blue wins to construct the string
        for (ll i = 0; i < b; i++)
        {
            if (temp2) // If there are remaining matches
            {
                temp2--; // Reduce the count of remaining matches
            }
            else // When there are no more remaining matches
            {
                if (temp2 == 0) // Ensure that the count is exactly zero
                {
                    temp--;     // Reduce the maximum wins for a team
                    temp2 = -1; // Set temp2 to -1 to avoid entering this block again
                }
            }
            // Construct the string by adding 'R's for Red wins
            // Limited by the minimum between the calculated maximum wins and remaining Red wins
            for (ll j = 0; j < min(temp, r); j++)
            {
                s += 'R';
                temp_r--; // Decrement Red wins count
            }
            r = temp_r; // Update Red wins count
            s += 'B';   // Add 'B' for Blue win
        }

        // Add the remaining Red wins to the string
        while (temp_r > 0)
        {
            s += 'R';
            temp_r--;
        }

        cout << s << endl; // Output the constructed string
        return 0;          // Exit after processing one test case (which is incorrect)
    }

    return 0;
}
