#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;

const int mod = 1e9 + 7;

ll gcd(ll a, ll b)
{
    if ((a % b) == 0)
    {
        return b;
    }
    else
    {
        return gcd(b, a % b);
    }
}

int minimum(vector<int> a)
{
    int mn = *min_element(a.begin(), a.end());
    return mn;
}

void decToBinary(int n)
{
    // array to store binary number
    int binaryNum[32];

    // counter for binary array
    int i = 0;
    while (n > 0)
    {

        // storing remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }

    // printing binary array in reverse order
    for (int j = i - 1; j >= 0; j--)
        cout << binaryNum[j];
}

// for rotating matrix by 90 degree
void rotateMatrix(vector<vector<int>> &v, int n)
{
    for (int i = 0; i < n / 2; ++i)
    {
        for (int j = i; j < n - i - 1; ++j)
        {
            int ptr = v[i][j];

            v[i][j] = v[n - 1 - j][i];

            v[n - 1 - j][i] = v[n - 1 - i][n - 1 - j];

            v[n - 1 - i][n - 1 - j] = v[j][n - 1 - i];

            v[j][n - 1 - i] = ptr;
        }
    }
}

// vector to int conversion
int vectorToInt(const vector<int> &nums)
{
    stringstream ss;
    for (int num : nums)
    {
        ss << num;
    }
    int result;
    ss >> result;
    return result;
}

vector<int> SieveOfEratosthenes(int n)
{
    // Create a boolean array "prime[0..n]" and initialize all entries it as true. A value in prime[i] will finally be false if i is Not a prime, else true.
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));

    for (int p = 2; p * p <= n; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {

            // Update all multiples of p greater than or  equal to the square of it numbers which are multiple of p and are less than p^2 are already been marked.
            for (int i = p * p; i <= n; i += p)
            {
                prime[i] = false;
            }
        }
    }

    vector<int> ans;

    // Print all prime numbers
    for (int p = 2; p <= n; p++)
        if (prime[p])
            ans.push_back(p);

    return ans;
}
/* *************************************(code begins)**************************************** */


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        vector<ll> a(n) ;

        ll sum = 0 ;

        for(ll i = 0 ; i < n ; ++i)
        {
            cin >> a[i] ;
            sum += a[i] ;
        }

        cout<<sum - a[n-2] - a[n-2] << endl ;

    }
}
