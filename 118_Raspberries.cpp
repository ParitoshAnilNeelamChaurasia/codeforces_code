#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int k;
        cin >> n >> k;

        int a[n];

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        int even = 0;
        int ans = k;

        for (int i = 0; i < n; ++i)
        {
            if (a[i] % 2 == 0)
            {
                even++;
            }

            if (a[i] % k == 0)
            {
                ans = 0;
            }

            else
            {
                ans = min(ans, k - (a[i] % k));
            }
        }

        if (k == 4)
        {
            if (even >= 2)
            {
                ans = 0;
            }
            /* 
            {6,5,5}

            (1) {6,6,5}
             */
            else if (even == 1)
            {
                ans = min(ans, 1);
            }

            /* 
            n=3 ;k=4
            a[n] = {5,5,5}

            // SOLUTION

           (1) a[n] = {6,5,5}

           (2) a[n] = {6,6,5} ;
             */
            else
            {
                ans = min(ans, 2);
            }
        }
        cout<<ans<<endl ;
    }
    return 0;
}
            // below "if" -> "else if"
/* 
The first code snippet uses two separate if statements, so it evaluates all conditions independently, even if one condition has already been satisfied.

The second snippet uses an else if statement, meaning it checks subsequent conditions only if the preceding condition is false. If a condition is true, it skips the remaining conditions within the same block.
 */