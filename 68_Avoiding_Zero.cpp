#include <bits/stdc++.h>
#define ll  long long 
using namespace std;
 
int main()
{
    
 
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin>>n;
 
        int a[n];
        vector <int> p,ne;
        ll sum=0;
        int c=0;
        ll ps=0;
        ll ns=0;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            sum=sum+a[i];
            if(a[i]>0)
            {
                p.push_back(a[i]);
                ps=ps+a[i];
            }

            else if (a[i]==0)
            {
                c++;
            }
            else
            {
                ne.push_back(a[i]);
                ns= ns + a[i];
            }
        }
        if (sum==0)
        {
            cout<<"NO\n";
        }
        else
        {
            cout << "YES\n";
            sort(p.begin(), p.end(), greater<int>());
            sort(ne.begin(), ne.end());
 
            if(ps>abs(ns))
            {
            for (int i = 0; i < p.size(); i++)
                cout << p[i] << " ";
 
            for (int i = 0; i < ne.size(); i++)
                cout << ne[i] << " ";
            }
            else 
            {
                for (int i = 0; i < ne.size(); i++)
                    cout << ne[i] << " ";
                for (int i = 0; i < p.size(); i++)
                    cout << p[i] << " ";
 
                
            }
            for (int i = 0; i < c; i++)
            {
                cout<<"0 ";
            }
 
            cout << "\n";
        }   
    }
}