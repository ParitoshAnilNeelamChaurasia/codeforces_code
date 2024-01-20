#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n ;
        cin >> n ;

        vector<long int> a(n) ;

        for(int i = 0 ; i < n ; ++i)
        cin >> a[i] ;

        sort(a.begin() , a.end()) ;

        int ans = 0 ;

        for(int i = 0 ; i < n/2 ; ++i)
        {
            ans += (a[n-i-1] - a[i]) ;
        }
        cout<<ans<<endl ;
}
}
/* 
int n;
        cin >> n;

        vector<long int> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        int mx = INT_MIN;

        vector<long int> ans_1;
        vector<long int> ans_2;

        for (int i = 0; i < n; ++i) {
            ans_1.push_back(a[0]);
            ans_1.push_back(a[n - 2]);

            ans_2.push_back(a[1]);
            ans_2.push_back(a[n - 1]);
        }

        long int sum_1 = 0;
        long int diff_1 = 0;

        sort(ans_1.begin(), ans_1.end());
        sort(ans_2.begin(), ans_2.end());

        long int mx_1 = ans_1[ans_1.size() - 1];
        long int mn_1 = ans_1[0];

        sum_1 = mx_1 - mn_1;

        long int mx_2 = ans_2[ans_2.size() -1];
        long int mn_2 = ans_2[0];  // You missed a semicolon here

        long int sum_2 = mx_2 - mn_2;

        if(n==1)
        {
            cout<<"0"<<endl ;
        }

        else

        cout << sum_1 + sum_2 << endl;
 */