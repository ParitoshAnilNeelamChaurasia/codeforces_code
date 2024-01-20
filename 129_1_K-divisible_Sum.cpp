#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double n;
        double k;

        cin >> n >> k;

// ceil -> used for greatest integer function
        ll f = ceil(n / k);

        k = k * f;

        int res = ceil(k / n);

        cout << res << endl;
    }
    return 0;
}

/* 

n = 4, k = 3
f = ceil(4/3) = 2 (since n/k is greater than 1 but not a whole number, ceil of that is 2)
k = k * f = 3 * 2 = 6
res = ceil(6/4) = 2
The output for the second input is 2.



*/

// if(n == 1)
// {
//     cout<<k<<endl ;
//     continue;
// }

// else if(n == k)
// {
//     cout<<1<<endl ;
//     continue;
// }

// else if(n > k)
// {
//     cout<<k-1<<endl ;
//     continue;
// }

// else
// {
//     if(k%n == 0)
//     {
//         cout<<k/n<<endl ;
//         continue;
//     }
//     else
//     {
//         cout<<k/n+1 <<endl ;
//         continue;
//     }
// }