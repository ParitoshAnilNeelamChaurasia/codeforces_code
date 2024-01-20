// https://codeforces.com/problemset/problem/1293/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    double sum = 0; 

    for (int i = 1; i <= n; ++i)
    {
        sum = sum + (1.0 / i); // Use 1.0 to ensure floating-point division
    }

    cout << fixed << setprecision(6) << sum << endl; // Set precision for output

    return 0;
}
