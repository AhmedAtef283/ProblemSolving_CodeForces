#include<bits/stdc++.h>
using namespace std;
typedef long long ll ; 


void solve(){
    ll n, num, digit, rev = 0;

    cin >> num;

    n = num;     // 160 

    do
    {
        digit = num % 10;           // digit = 1
        rev = (rev * 10) + digit;    // rev=61
        num = num / 10;               // num = 0
    } while (num != 0);
        if(n==rev){
            cout<< rev <<endl;
            cout<< "YES" << endl; 
        }else{
            cout<<rev << endl; 
            cout<< "NO" << endl;
        }




}

int main(){
#ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
#endif
// --------------------------------------
    ll tc =1 ; 
    // cin >> tc ; 
    while(tc--)
    solve();
}
