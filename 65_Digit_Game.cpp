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

        int x; // +ve integers without leading 0's
        cin >> x;

        int even = 0;
        int odd = 0;
        vector<int> total;
        if (n == 1)
        {
            if (x % 2 == 0)
            {
                cout << "2" << endl;
            }
            else
            {
                cout << "1" << endl;
            }
        }

        else
        {
            while (x > 0)
            {
                int last_digit = x % 10;
                int rest_digit = x / 10;

                // if(rest_digit==0 || rest_digit==1 ||rest_digit==2 ||rest_digit==3 ||rest_digit==4 ||rest_digit==5 ||rest_digit==6 ||rest_digit==7 ||rest_digit==8 ||rest_digit==9 )
                // {
                //     continue ;
                // }

                if(last_digit%2==0)
                {
                    even++ ;
                }
                else
                {
                    odd++ ;
                }
            }
        }

        if (even >= odd)
        {
            cout << "2" << endl;
        }
        else
        {
            cout << "1" << endl;
        }
    }
    return 0;
}