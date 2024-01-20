#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    
 
    int t;
    cin >> t;
    for (int tt = 0; tt < t; tt++)
    {
        int n;
        cin>>n;
        
        int m[101]={0};
        for (int i = 0; i < n; i++)
        {
                int x;
                cin>>x;
                m[x]++;
        }
        
        int ans=0;
        for (int i = 0; i < 101; i++)
        {
            if (m[i] != 0)
            {
                m[i]--;
            }
            else
            {
 
                ans += i;
                break;
            }
        }
 
        for (int i = 0; i < 101; i++)
        {
            if (m[i] != 0)
            {
                m[i]--;
            }
            else
            {
 
                ans += i;
                break;
            }
        }
        cout<<ans<<"\n";
        
       
    }

}