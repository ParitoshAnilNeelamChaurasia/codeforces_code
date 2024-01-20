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

        // n -> even

        if(n % 2 == 0)
        {
            cout<<"YES"<<endl ;
            for(int i = 1 ; i <= n ; i = i + 2)
            {
                cout<<"2 -2"<<" " ;
            }
            cout<<endl ;
        }

        // n -> odd
        else
        {
            if(n == 3)
            {
                cout<<"NO"<<endl ;
                continue ;
            }


            else
            {
                cout<<"YES"<<endl ;
                int m = n-2 ;

                int a = -(m/2) ;
                int b = (m+1)/2 ;

                for(int i = 1 ; i <= n/2 ; ++i)
                {
                   cout<<a<<" "<<b<<" ";
                }
                cout<<a ;
            }
            cout<<endl ;
        }
    }
    return 0;
}


/* 
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    ll t, n, i, j, a, b, m;
    
    cin>>t;
    
    for(;t--;)
    {
        cin>>n;
        
        if(n==3){
            cout<<"NO\n";
            continue;
        }
        
        cout<<"YES\n";
        
        if((n%2)==0){
        for(i=1; i<=n; i+=2)
        {
            cout<<"2 -2 ";
        }
        }else{
            m=n-2;
            a=-(m/2);
            b=(m+1)/2;
            
            for(i=1; i<=n/2; i++){
                cout<<a<<" "<<b<<" ";
            }
            cout<<a;
        }
        
        cout<<"\n";
        
    }
    
}
 */