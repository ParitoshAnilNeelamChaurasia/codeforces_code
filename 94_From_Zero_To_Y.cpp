#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int x, y;
        cin >> x >> y;
 
        int ans = 0;
        ans += y % x;
        int temp = y / x;
 
        while (temp != 0) {
            ans += temp % 10;
            temp /= 10;
        }
 
        cout << ans << endl;
    }
 
    return 0;
}