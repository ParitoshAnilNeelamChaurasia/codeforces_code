#include <iostream>
#include <vector>
#include <queue>
using namespace std;

#define ll long long

struct Compare
{
    bool operator()(const ll &a, const ll &b)
    {
        return a < b; // Change to a > b for max heap behavior
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<ll> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        priority_queue<ll, vector<ll>, Compare> pq;

        ll ans = 0;

        for (int i = 0; i < n; ++i)
        {
            if (a[i] == 0)
            {
                if (!pq.empty())
                {
                    ans += pq.top();
                    pq.pop();
                }
            }
            else
            {
                pq.push(a[i]);
            }
        }
        cout << ans << endl;
    }
    return 0;
}
