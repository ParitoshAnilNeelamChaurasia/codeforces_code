#include <iostream>
#include <bits/stdc++.h>
// #include "utilities.cpp"
using namespace std;
#define int long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define forn(i, x, n) for (int i = x; i < n; i++)
#define vi vector<int>
#define vpp vector<pair<int,int>>
#define vs vector<string>
#define vll vector<long long>
#define ss second
#define ff first
int row[] = {1,0,-1,0};
int col[] = {0,1,0,-1};
const int mod = 1e9 + 7;

void solve() {

    int a,b,c;
    cin>>a>>b>>c;

    vi arr;
    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);

    sort(all(arr));

    if(arr[1]%arr[0] == 0 and ((arr[1]/arr[0] == 2 and arr[2]%arr[0] == 0 and arr[2]/arr[0] <= 3)
        || (arr[1]/arr[0] == 1 and arr[2]%arr[0] == 0 and arr[2]/arr[0] <= 4))){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
}


signed main(){

    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;

}