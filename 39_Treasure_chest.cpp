#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,k;
        cin>>x>>y>>k;
        int ans = 0;
        if(y<=x){
            ans = x;
        }
        else{
            
            if(x+k > y)
            {
                int count = y-x;
                ans = x+count;
            }
            else if(x+k == y)
            {
                ans = y;
            }

            // x+k < y
            else
            {
                int a = x+k;
                int b = y-a;
                ans = (a + (2*b));
            }
        }
        cout<<ans<<endl;
    }
}
