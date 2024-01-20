#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Input for the number of test cases
    int t;
    cin >> t;

    // Loop through each test case
    while (t--)
    {
        // Input for the size of the array
        int n;
        cin >> n;

        // Variables to store the sum of array elements and count of elements equal to 1
        long long int sum = 0;
        long long int count = 0;

        // Array to store the elements
        long int a[n];

        // Loop to input array elements and calculate sum and count
        for (long long int i = 0; i < n; ++i)
        {
            cin >> a[i];
            sum += a[i];

            if (a[i] == 1)
            {
                count++;
            }
        }

        // Check a condition and output "YES" or "NO"
        if (sum - n >= count && n > 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
