#include<bits/stdc++.h>
using namespace std;
typedef long long ll ; 


void solve(){
        ll n ; 
        cin >> n ;
        for(int i=1; i <13 ; i++){
            cout<< n<<" " << "* " << i <<" "<< "= " << n*i  << endl; 
        }

    }

int main(){
#ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
#endif
// --------------------------------------
    ll tc =1  ; 
     // cin >> tc ; 
    while(tc--)
    solve();
    }
