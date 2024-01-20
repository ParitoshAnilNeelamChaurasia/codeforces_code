/* https://codeforces.com/problemset/problem/1831/B */

/*
Problem summary
Given - Array a (a1,....an) , Array b(b1,.....bn)

Merge(C)- c1,......c(2n) [ Find max length subarray with equal values]

a1 a2 a3....      b1 b2 b3.....

e.g.  c = [a1, a2, b1, a3, b2, b3, ...]

          a  = [1 2 3 2 2]
          b  = [3 2 2 1 2]

          c  = [ 1 3 2 2 2 2 2 1 ]
contribution = [ a b a a a b b b ]
   3 possible ways :
   1. Both contributes. [ a(x)...a(x+p) b(y)...b(y+q)] = length = p + q
   2. All equal values comes from array a. [ a(x)...a(x+p)] = length = p
   3. All equal values comes from array b.  [ b(y)...b(y+q)] = length = q


 a = [ 1 2 3 2 2]
 b = [ 3 2 2 1 2]
 answer = count_in_a(2) + count_in_b(2) = 2 + 2 = 4
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n), b(n);

        for (auto &it : a)
        {
            cin >> it;
        }

        for (auto &it : b)
        {
            cin >> it;
        }

        // To count the maximum consecutive occurrences of values in arrays a and b
        unordered_map<int, int> consec_count_a, consec_count_b;

        int index = 0;
        int val;
        int count;

        // Count consecutive occurrences in array a
        while (index < n)
        {
            val = a[index];
            count = 0;
            while (index < n && a[index] == val)
            {
                count++;
                index++;
            }
            consec_count_a[val] = max(consec_count_a[val], count);
        }

        index = 0;

        // Count consecutive occurrences in array b
        while (index < n)
        {
            val = b[index];
            count = 0;

            while (index < n && b[index] == val)
            {
                count++;
                index++;
            }

            consec_count_b[val] = max(consec_count_b[val], count);
        }

        int ans = 0;

        /* NOTE */
        /* if we traverse single map  -> than we have left the case in which all values came from one of the vectors */

        // traversing in first map

        // Check for the maximum length of subarray with equal values
        for (auto it : consec_count_a)
        {
            int val = it.first;

            int val_count_in_a = it.second;

            int val_count_in_b = consec_count_b[it.first];

            ans = max(val_count_in_a + val_count_in_b, ans);
        }

        // traversing in second map

        for (auto it : consec_count_b)
        {
            int val = it.first;

            int val_count_in_b = it.second;

            int val_count_in_a = consec_count_a[it.first];     // consec_count_a => map => count value

            ans = max(val_count_in_a + val_count_in_b, ans);
        }

        cout << ans << endl; // Output maximum length of subarray with equal values

    }
    return 0;
}
