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

        vector<int> b(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> b[i];
        }

        set<int> st ;

        for(auto it : b)
        {
            st.insert(it) ;
        }

        if(st.size() == n)
        {
            cout<<"NO"<<endl ;
        }
        else
        {
            cout<<"YES"<<endl ;
        }
    }
    return 0;
}