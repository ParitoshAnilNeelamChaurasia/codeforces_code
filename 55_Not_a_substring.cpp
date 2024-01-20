#include<bits/stdc++.h>
using namespace std;

void solve()
{
    // Read a string from input
    string s;
    cin >> s;

    // Calculate the size of the string
    int n = s.size();

    // Check if the string is "()"
    // If true, print "NO" and return
    if(s == "()")
    {
        cout << "NO" << endl;
        return;
    }

    // Initialize a counter variable
    int i = 0;

    // Flag to check if the substring ")(" exists
    bool check = false;

    // Check for the existence of the substring ")("
    while(i < n-1)
    {
        if(s.substr(i, 2) == ")(")
        {
            check = true;
            break;
        }
        ++i;
    }

    // String to store the answer
    string ans = "";

    // If the substring ")(" exists
    if(check)
    {
        // Construct a string with n '(' followed by n ')'
        for(int i = 0; i < n; ++i)
        {
            ans += "(";
        }
        for(int i = 0; i < n; ++i)
        {
            ans += ")";
        }

        // Print "YES" and the constructed string
        cout << "YES" << endl;
        cout << ans << endl;
    }


    
    // If the substring ")(" does not exist
    else
    {
        // Construct a string with n copies of "()"
        for(int i = 0; i < n; ++i)
        {
            ans += "()";
        }

        // If the constructed string is equal to the input string, print "NO"
        if(ans == s)
        {
            cout << "NO" << endl;
        }
        // Otherwise, print "YES" and the constructed string
        else
        {
            cout << "YES" << endl;
            cout << ans << endl;
        }
    }
}

int main()
{
    // Read the number of test cases
    int t;
    cin >> t;

    // Process each test case by calling the solve function
    while(t--)
    {
        solve();
    }
}
