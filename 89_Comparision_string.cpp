#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n ;
        cin >> n ;

        string s ;
        cin >> s ;

        int ans = 0 ;
        int consecutive = 0 ;

        for(int i = 0 ; i < n ; ++i)
        {
            consecutive++ ;
            if(i == n-1 || s[i+1] != s[i])
            {
                ans = max(ans , consecutive) ;
                consecutive = 0 ;
            }
        }
        cout<<ans+1<<endl ;
    }
    return 0;
}







/* 
Test Case 1: <<>>
Length of the string: 4
Execution:
consecutive starts at 1 for the first character <.
As we move to the next character, it's the same as the previous one (<). consecutive becomes 2.
The third character is >, which is different from the previous one. So, ans is updated to 2 (the current value of consecutive), and consecutive is reset to 0.
The fourth character is also >, which is different from the previous one. So, ans remains 2.
The loop ends, and ans + 1 is printed, which results in 3 (the longest consecutive sequence between different characters).

 */

/* 

int n;
        cin >> n;

        string s;
        cin >> s;

        int count_inc = 0 ;   // <
        int count_dec = 0 ;   // >

        int mx = 0 ;

        for(int i = 0 ; i < n ; ++i)
        {
            if(s[i] == '<')
            {
                count_inc++ ;
                while(i+1 < n && s[i+1] == '<')
                {
                    count_inc++ ;
                    i++ ;
                }
            }
            else if(s[i] == '>')
            {
               count_dec++ ;
               while(i+1 < n && s[i+1] == '>')
               {
                count_dec++ ;
                i++ ;
               }
            }

            else
            {
                for(int i = 0 ; i < n ; i++)
                {
                    if(s[i] == '<' && s[i+1] == '>')
                    {
                        mx = 1 ;
                    }
                    else if(s[i] == '>' && s[i+1] == '<')
                    {
                        mx = 1 ;
                    }
                }
            }

          
            mx = max(count_inc , count_dec) ;
        }
        cout<<mx+1<<endl ;
 */