#include <bits/stdc++.h>
using namespace std;

#define ll long long 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a,b,c,f=0;
        cin>>a>>b>>c;

        /* 
        i cuts -> i+1 pieces
        j cuts -> j+1 pieces
        k cuts -> k+1 pieces
         */
        for(ll i = 0 ; i <= 3 ; i++) 
        {
            for(ll j = 0 ; j <= 3 ; j++) 
            {
                for(ll k = 0 ; k <= 3 ; k++) 
                {
                    if(i+j+k > 3)
                        continue;
                    if(a%(i+1)==0 and b%(j+1)==0 and c%(k+1)==0) 
                    {
                        if(a/(i+1) == b/(j+1) and a/(i+1) == c/(k+1)) 
                        {
                            f=1;
                            break;
                        }
                    }
                }
                if(f)
                    break;
            }
            if(f)
                break;
        }
        if(f)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
        cout<<endl;
        
    }
    return 0;
}