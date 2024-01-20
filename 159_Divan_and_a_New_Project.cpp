// https://codeforces.com/problemset/problem/1614/B

#include <bits/stdc++.h>
#include <algorithm>
#define endl '\n'
#define ll long long
using namespace std;

int main()
{
    int T;  
    cin >> T;

    while (T--) 
    {
        int n;              // Number of buildings
        cin >> n;

        pair<ll, ll> arr[n]; // Array to store building visit frequency and index
        for (int i = 0; i < n; i++)
        { 
            cin >> arr[i].first; // Read the number of times one has to visit the ith building
            arr[i].second = i;    // Set the index of the element
        }

        sort(arr, arr + n); // Sort the array based on visit frequency

        ll time = 0; // Initialize time variable to store the minimum time spent walking

        int ans[n]; // Array to store the final building coordinates

        int idx = 1; // Initialize the index variable

        // Loop to calculate time and assign coordinates for even indices
        for (int i = n - 1; i >= 0; i = i - 2)
        {
            ll temp = 2 * idx; // Calculate the temporary value
            time = time + (arr[i].first) * temp; // Update total time
            ans[arr[i].second] = idx; // Assign the index value to the array
            idx++; // Increment the index
        }

        idx = -1; // Reset the index for odd indices

        // Loop to calculate time and assign coordinates for odd indices
        for (int i = n - 2; i >= 0; i -= 2)
        {
            int temp = 2 * abs(idx); // Calculate the temporary value
            time = time + (arr[i].first) * temp; // Update total time
            ans[arr[i].second] = idx; // Assign the index value to the array
            idx--; // Decrement the index
        }

        cout << time << endl; // Print the minimum time spent walking

        cout << 0 << ' '; // Print the coordinate of headquarters

        // Loop to print the coordinates of the remaining buildings
        for (int i = 0; i < n; i++)
            cout << ans[i] << ' ';
        cout << endl;
    }

    return 0; // Return 0 to indicate successful execution
}
