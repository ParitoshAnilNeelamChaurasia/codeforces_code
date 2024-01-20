
#include <iostream>
#include <bits/stdc++.h> // Includes most of the standard headers

#define ll long long // Define a macro 'll' for 'long long'
using namespace std;

int main() {
    int t;
    cin >> t; // Read the number of test cases

    while (t--) { // Loop through each test case
        int n;
        cin >> n; // Read the number of vampires for the current test case

        vector<ll> a(n); // Create a vector to store strengths of vampires

        for (int i = 0; i < n; ++i) {
            cin >> a[i]; // Read strengths of each vampire into the vector
        }

        int group = 0; // Initialize the group count
        ll sum = a[0]; // Initialize sum with the strength of the first vampire

        for (int i = 0; i < n; ++i) { // Loop through each vampire
            sum = sum & a[i]; // Calculate bitwise AND of strengths to determine group strength

            if (sum == 0) { // If the strength of the group becomes zero
                group++; // Increment the group count
                if (i + 1 < n) {
                    sum = a[i + 1]; // Update the sum to the next vampire's strength if exists
                } else {
                    sum = 0; // Otherwise, set sum to zero
                }
            }
        }

        if (group == 0) {
            group = 1; // If no groups were formed initially, set group to 1
        }

        cout << group << endl; // Output the maximum number of groups with smallest sum of strengths
    }

    return 0;
}

 


/* #include <iostream>
#include <bits/stdc++.h>

#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<ll> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        int group = 0;

        ll sum = a[0];

        for (int i = 0; i < n; ++i)
        {
            sum = sum & a[i];
            if (sum == 0)
            {
                group++;
                if (i + 1 < n)
                {
                    sum = a[i + 1];
                }
                else
                {
                    sum = 0;
                }
            }
        }
        if (group == 0)
        {
            group = 1;
        }
        cout << group << endl;
    }
    return 0;
} */