#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int t ;
    cin >> t ;
      
    while(t--)
    {
        int a , b , c ;

        cin >> a >> b >> c ;

        double A = max(a,b) ;
        double B = min(a,b) ;

        int count = 0 ;

        while(A > B)
        {
            count++ ;

            double sub = A-B ;

            if(sub >= c)
            {
                A = A-c ;
                B = B+c ;
            }
            else
            {
                double sub_2 = (A-B)/2 ;
                A = A - sub_2 ;
                B = B + sub_2 ;
            }
        }
        cout<<count<<endl ;
    }
}

/* 
6
 
3 7 2
17 4 3
17 17 1
17 21 100
1 100 1
97 4 3
*/


// dry run 


/* 
Input:
17 4 3

Initial values:
A = 17
B = 4
c = 3
count = 0

Iteration 1:
A > B, so we enter the loop.

count = 1

sub = A - B = 17 - 4 = 13

Since sub is greater than or equal to c (3), we do this:
A = A - c = 17 - 3 = 14
B = B + c = 4 + 3 = 7

Iteration 2:
A > B, so we enter the loop.

count = 2

sub = A - B = 14 - 7 = 7

Since sub is greater than or equal to c (3), we do this:
A = A - c = 14 - 3 = 11
B = B + c = 7 + 3 = 10

Iteration 3:
A > B, so we enter the loop.

count = 3

sub = A - B = 11 - 10 = 1

sub is less than c (3), so we do this:
sub_2 = (A - B) / 2 = (11 - 10) / 2 = 0.5

A = A - sub_2 = 11 - 0.5 = 10.5
B = B + sub_2 = 10 + 0.5 = 10.5

Now, A is not greater than B, so we exit the loop.

Output:
3 (count)

 */