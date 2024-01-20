#include <iostream>
#include <algorithm> 
#define ll long long

using namespace std;

void asquare()
{
    ll n, k;
    cin >> n >> k;
    ll a[k];
    for (int i = 0; i < k; i++)
    {
        cin >> a[i];
    }
    sort(a, a + k); // Sorting the array of mice coordinates in ascending order.

    ll cat = 0; // Initialize the cat's position.
    ll ans = 0; // Initialize the count of mice that can reach the hole without being eaten.

    for (int i = k - 1; i >= 0; i--)
    {
        ll x = a[i]; // Get the coordinate of the current mouse.

        if (x <= cat) // If the mouse is to the left of the cat, break the loop.
            break;

        ll mice = n - x; // Calculate the distance the mouse can move towards the hole.
        cat += mice; // Update the cat's position after the mouse moves.
        ans++; // Increment the count of mice that can reach the hole without being eaten.
    }

    cout << ans << "\n"; // Output the maximum number of mice that can reach the hole without being eaten.
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        asquare(); // Process each test case.
    }
    return 0;
}
