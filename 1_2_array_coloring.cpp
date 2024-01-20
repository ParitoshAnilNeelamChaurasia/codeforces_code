#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i < n;i++){
            cin>>arr[i];
        }

        int count = 0 ;

        for(int i = 0 ; i <= n ; ++i)
        {
            // students who are not happy -> first count them
            if(i+1 == arr[i] )
            {
                count++ ;
            }
        } 

        // numbers -> 5 -> 5/2 -> 2.5 -> o/p -> 2 -> swap 3 numbers
        if(count % 2 != 0)
        {
             count++ ;
        }
        cout<<count/2<<endl ;
        
    }
}
