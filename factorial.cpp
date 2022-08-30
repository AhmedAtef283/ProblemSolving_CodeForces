#include<bits/stdc++.h>
using namespace std;
typedef long long ll ; 



int factorial(int n){
    if(n==0 || n==1){
        return 1 ;
    }
    else{
        return n*factorial(n-1);
    }
}
void solve(){
            ll n ; 
            cin >> n;
            ll x = 1 ;
            if(n==0 || n==1){
                cout<< 1<< endl ;
                return;
            }
            for(int i = n; i>1 ; i--){
                x*=i ;
                
            }
            cout<< x << endl ; 
            

    }

int main(){
#ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
#endif
// --------------------------------------
    ll tc  ; 
    cin >> tc ; 
    while(tc--){
    solve();
    }
}


