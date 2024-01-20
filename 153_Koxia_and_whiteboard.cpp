// https://codeforces.com/contest/1770/problem/A


// when to use min_heap

/* 
  at every operation 
  -> choose minimum of bucket among all 
  -> pop -> smallest one
  -> push -> largest one
*/

#include <iostream>
#include <queue>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    long long sum = 0;

    // max heap
    // priority_queue<int>pq

    // min heap
    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 0; i < n; ++i) {
        int temp;
        cin >> temp;
        pq.push(temp);
    }

    for (int i = 0; i < m; ++i) {
        int temp;
        cin >> temp;

        // remove the smallest element
        pq.pop();

        // push the largest element
        pq.push(temp);
    }

    while (!pq.empty()) {
        sum += pq.top();
        pq.pop();
    }

    cout << sum << endl;
}

int main() {
    int testCase ;
    cin >> testCase;

    while (testCase--) {
        solve();
    }

    return 0;
}
