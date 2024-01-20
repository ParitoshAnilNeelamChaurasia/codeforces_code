#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <array>
#include <set>
#include <bitset>
#include <list>
#include <iterator>
#include <regex>
#define ll long long
#define ld long double
#define endl '\n'
#define ull unsigned long long
#define ui unsigned int
#define pb push_back
#define PI 3.1415926535
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
  

 
bool comparePair(pair < int , int > p1 , pair < int , int > p2)
{
    if(p1.first  < p2.first)
    {
        return false;
    }
    else if(p1.first > p2.first)
    {
        return true;
    }
    return p1.second < p2.second;
}
 
void solve()
{
    int numElement; cin >> numElement;
    int k; cin >> k;
    int arr[numElement];
    for(int i = 0; i < numElement; i++)
    {
        cin >> arr[i];
    }
    for(int i = 0; i < numElement; i++)
    {
        arr[i] %= k;
    }
    vector < int > ans;
    for(int i = 0; i < numElement; i++)
    {
        if(arr[i] == 0)
        {
            ans.push_back(i + 1);
        }
    }
    vector < pair < int , int > > v(numElement);
    for(int i = 0; i < numElement; i++)
    {
        v[i].first = arr[i] , v[i].second = i + 1;
    }
    sort(v.begin() , v.end() , comparePair);
    for(auto i : v)
    {
        if(i.first != 0)
        {
            ans.push_back(i.second);
 
        }
 
    }
    for(int k : ans)
    {
        cout << k << ' ';
    }
    cout << endl;
}
 
 
int main()
{
    fast;
    
    int test_cases;
    cin >> test_cases;
    while(test_cases--)
    {
        solve();
    }
}