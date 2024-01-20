
/* 
(1) find 2 smallest prime numbers at a distance 'd'
(2) multiply to get the result
 */

#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n)
{
    // Base cases: 0, 1 are not prime numbers
    if (n <= 1)
        return false;
    // 2 and 3 are prime numbers
    if (n <= 3)
        return true;
    // If divisible by 2 or 3, it's not a prime number
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    // Checking divisibility with numbers of the form 6k ± 1
    // Starting from 5, check up to the square root of 'n'
    // (as factors occur in pairs beyond square root)
    for (int i = 5; i * i <= n; i += 6)
    {
        // Check if 'n' is divisible by 'i' or 'i+2'
        if (n % i == 0 || n % (i + 2) == 0)
            return false; // Not a prime number
    }

    // If 'n' passed all the above checks, it's a prime number
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int x = 1 + n;
        int prime_first = 0;
        int prime_second = 0;

        while (1)
        {
            if (isPrime(x))
            {
                prime_first = x;
                break;
            }
            x++;
        }

// atleast 'n' distance
        x = x + n;

        while (1)
        {
            if (isPrime(x))
            {
                prime_second = x;
                break;
            }
            x++;
        }
        cout << static_cast<long long>(prime_first) * prime_second << endl;
    }
    return 0;
}
