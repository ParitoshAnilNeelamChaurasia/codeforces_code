// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t ;
//     cin >> t ;
    
//     while(t--)
//     {
//         int n ;  // tsondu
//         int m ;  // tenzing

//         cin >> n >> m ;

//         vector<long int> a(n) ;
//         for(int i = 0 ; i < n ; ++i)
//         {
//             cin >> a[i] ;
//         }

//         vector<long int> b(m) ;
//         for(int i = 0 ; i < m ; ++i)
//         {
//             cin >> b[i] ;
//         }

//         sort(a.begin(),a.end(),greater<int>()) ; // sort tsondu -> decreasing order

//         sort(b.begin() , b.end()) ;     // sort in increasing order

//         int i = 0 ;
//         int j = 0 ;

// int abs_tsondu = 0;
// int abs_tenzing = 0 ;

//         while(i < n && j < m)
//         {
//             int x = a[i] - b[j] ;

//             abs_tsondu = a[i] - b[j] ;

//             abs_tenzing = b[j] - a[i] ;

//             if(abs_tsondu < 0)
//             {
//                 i++ ;
//             }

//             if(abs_tenzing < 0)
//             {
//                 j++ ;
//             }

//         }
//         if(abs_tenzing > abs_tsondu)
//         {
//             cout<<"Tsondu"<<endl ;
//         }

//         else if(abs_tenzing < abs_tsondu)
//         {
//             cout << "Tenzing" << endl ;
//         }
//         else
//         {
//             cout << "Draw" << endl ;
//         }
//     }
//   return 0;
// }


#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin >> t ;

    while(t--)
    {
        int n , m;
        cin >> n >> m ;

        long long int a[n] ;
        long long int sum_1 = 0 ;
        for(long long int i = 0 ; i < n ; ++i)
        {
            cin >> a[i] ;
            sum_1 += a[i] ;
        }

        long long int b[m] ;
        long long int sum_2 = 0 ;
        for(long long int i = 0 ; i < m ; ++i)
        {
            cin >> b[i] ;
            sum_2 += b[i] ;
        }

        if(sum_1 == sum_2)
        {
            cout<<"Draw"<<endl ;
        }

        else if(sum_1 > sum_2)
        {
            cout << "Tsondu"<<endl ;
        }

        else
        {
            cout << "Tenzing" << endl ;
        }
    }
}