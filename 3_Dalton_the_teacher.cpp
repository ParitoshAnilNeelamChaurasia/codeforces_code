#include<iostream>
#include<climits>
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

        int ans = 1e9 ;
        bool f = 0;
        for(int i = 0 ; i < n ; ++i)
        {
            if(arr[i+1] < arr[i])
            {
                cout<<"0"<<endl ;
                f=1;
                
            }
            ans = min(ans,1+(arr[i+1]-arr[i])/2) ;
        }
        if(f==0)cout<<ans<<endl ;
    }
}
