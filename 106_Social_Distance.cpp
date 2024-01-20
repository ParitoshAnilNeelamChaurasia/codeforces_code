#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

#define ll long long

int main() {
    ll t;
    cin >> t; // Number of test cases

    while (t--) {
        ll n, m;
        cin >> n >> m; // Number of people and chairs

        ll ar[n + 3]; // Array to store minimum empty chairs for each person

        // Reading the minimum required empty chairs for each person
        for (ll i = 0; i < n; i++) {
            cin >> ar[i];
        }

        sort(ar, ar + n); // Sorting the array of requirements
        ar[n] = ar[0]; // Making a circular array by copying the first element to the end

        ll sum = 0;

        // Calculating the total chairs required considering the constraints
        for (ll i = 0; i < n; i++) {
            // Summing up the maximum between consecutive requirements
            sum += max(ar[i], ar[i + 1]);
        }

        sum += n; // Adding the count of people

        // Checking if it's possible for everyone to sit down respecting the constraints
        if (sum <= m) {
            cout << "YES" << endl; // If possible, output "YES"
        } else {
            cout << "NO" << endl; // Otherwise, output "NO"
        }
    }
    return 0;
}



// if(n >= m)
// {
//     cout<<"NO"<<endl ;
// }

// else
// {
//     if(2*n <= m)
//     {
//         if(2*sum <= m )
//         {
//             cout<<"YES"<<endl ;
//         }
//         else
//         {
//             cout<<"NO"<<endl ;
//         }
//     }
// }