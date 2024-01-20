#include<bits/stdc++.h> // This line includes the necessary standard C++ libraries for input/output and data structures.

using namespace std; // This line specifies that we're using the standard namespace, so we don't need to prefix standard functions and objects with 'std::'.

int main() {
    int t;
    cin >> t; // Read the number of test cases from the input.

    while (t--) { // Loop through each test case.
        int n;
        cin >> n; // Read the number of elements in the array for this test case.

        long long int a[n]; // Declare an array of long long integers to store 'n' elements.

        for (int i = 0; i < n; ++i)
            cin >> a[i]; // Read 'n' elements and store them in the array 'a'.

        long long int sum = 0; // Initialize a variable to store the sum of absolute values of elements.
        int number_of_operation = 0; // Initialize a variable to count the number of operations.
        int neg = 0; // Initialize a variable to track if the previous element was negative.
        

        for (int i = 0; i < n; ++i) {
            sum += abs(a[i]); // Add the absolute value of the current element to the 'sum'.

            if (a[i] < 0) { // Check if the current element is negative.
                if (neg == 0) { // If the previous element was not negative (neg == 0), then we perform an operation.
                    neg = 1; // Set 'neg' to 1 to indicate that the previous element was negative.
                    number_of_operation++; // Increase the count of operations.
                }
            } else if (a[i] > 0) { // Check if the current element is positive.
                neg = 0; // Set 'neg' to 0 because the previous element was not negative.
            }
        }

        cout << sum << " " << number_of_operation << endl; // Output the sum and the number of operations for the current test case.
    }
    return 0; // Exit the program.
}
