#include <iostream>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    if (n == 1)
    {
        cout << k << endl;
        return;
    }

    if (n == k)
    {
        cout << 1 << endl;
        return;
    }

    if (n > k)
    {
        int a = n % k;
        int b = n / k;

        if (a != 0)
        {
            b++;
        }
        k = k * b;

        int c = k / n;
        int d = k % n;
        if (d != 0)
        {
            c++;
        }
        cout << c << endl;
        return;
    }

    if (n < k)
    {
        int a = k % n;
        int b = k / n;

        if (a != 0)
        {
            b++;
        }

        cout << b << endl;
        return;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
