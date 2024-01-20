#include<bits/stdc++.h>
using namespace std ;

void solve (){
        int n;
        cin>>n;
        for(int i=0;i<=150;i++){
            int seven_win = n-7*i;
            for(int j=0;j<=250;j++){
                int five_win = seven_win - 5*j;
                if(five_win >= 0 && five_win%3==0){
                    cout<<(five_win/3)<<" "<<j<<" "<<i<<"\n";
                    return;
                }
            }
        }
        cout<<-1<<"\n";
    }
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        solve() ;
    }
}