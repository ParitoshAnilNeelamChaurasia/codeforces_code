#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        int d;
        cin >> n >> d;

        string s;
        cin >> s;

        int flag = -1; // flag variable to check if any character is less than d

        for(int i = 0; i < n; ++i)
        {
            if(s[i] < d)
            {
                flag = 1; // set flag to 1 if any character is less than d
                cout << d;
            }
            cout << s[i]; // print the current character of the string
        }

        if(flag == -1)
        {
            cout << d << endl; // if no character is less than d, print d at the end
        }
        else
        {
            cout << endl; // print a new line if any character is less than d
        }
    }
}
