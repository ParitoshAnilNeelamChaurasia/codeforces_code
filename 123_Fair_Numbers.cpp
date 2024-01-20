#include <bits/stdc++.h>

using namespace std ;

#define int long long

bool ok(int n)
{
    int temp = n ; // Store the original number.
    while (n > 0) // Loop through each digit of the number.
    {
        int k = n % 10 ; // Extract the last digit of the number.
        if (k == 0)     // If the digit is zero, remove it and continue.
        {
            n = n / 10 ;
            continue ;
        }
        if (temp % k != 0) // Check if the original number is not divisible by the digit.
        {
            return false ; // If not divisible, return false.
        }
        n = n / 10 ; // Move to the next digit.
    }
    return true ; // If all digits satisfy the conditions, return true.
}

int32_t main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n ;
        cin >> n ;

        while (ok(n) == 0) // Find the next number that satisfies the conditions.
            n++ ;           // Increment the number until conditions are met.

        cout << n << endl;
    }

    return 0;
}
