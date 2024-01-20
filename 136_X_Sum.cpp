
/* https://codeforces.com/problemset/problem/1676/D */



#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        ll a[n][m];

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                cin >> a[i][j];
            }
        }

        ll mx = 0;

        for (ll i = 0; i < n; ++i)
        {
            for (ll j = 0; j < m; ++j)
            {
                ll sum = 0;
                sum += a[i][j];        //  add the value of current element

                // Top-left
                for (ll temp_i = i - 1, temp_j = j - 1; temp_i >= 0 && temp_j >= 0; --temp_i, --temp_j)
                {
                    sum += a[temp_i][temp_j];
                }

                // Top-right
                for (ll temp_i = i - 1, temp_j = j + 1; temp_i >= 0 && temp_j < m; --temp_i, ++temp_j)
                {
                    sum += a[temp_i][temp_j];
                }

                // Bottom-right
                for (ll temp_i = i + 1, temp_j = j + 1; temp_i < n && temp_j < m; ++temp_i, ++temp_j)
                {
                    sum += a[temp_i][temp_j];
                }

                // Bottom-left
                for (ll temp_i = i + 1, temp_j = j - 1; temp_i < n && temp_j >= 0; ++temp_i, --temp_j)
                {
                    sum += a[temp_i][temp_j];
                }

                mx = max(mx, sum);
            }
        }
        cout << mx << endl;
    }
    return 0;
}


// ANOTHER METHOD

/* 
ll solve(){
    ll n,m;
    cin>>n>>m;
    ll maxo=0;
    vector<vector<ll>> grid(n,vector<ll>(m,0));
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            cin>>grid[i][j];
        }
    }
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            ll temp_sum=0;
            temp_sum+=grid[i][j];
            ll temp_i=i-1,temp_j=j-1;
            while(temp_i>=0 && temp_j>=0){
                temp_sum+=grid[temp_i][temp_j];
                temp_i--;
                temp_j--;
            }
            temp_i=i-1;
            temp_j=j+1;
            while(temp_i>=0 && temp_j<m){
                temp_sum+=grid[temp_i][temp_j];
                temp_i--;
                temp_j++;
            }
            temp_i=i+1;
            temp_j=j-1;
            while(temp_i<n && temp_j>=0){
                temp_sum+=grid[temp_i][temp_j];
                temp_i++;
                temp_j--;
            }
            temp_i=i+1;
            temp_j=j+1;
            while(temp_i<n && temp_j<m){
                temp_sum+=grid[temp_i][temp_j];
                temp_i++;
                temp_j++;
            }
            maxo=max(maxo,temp_sum);
        }
    }
    cout<<maxo<<endl;
    return 0;
}
 */