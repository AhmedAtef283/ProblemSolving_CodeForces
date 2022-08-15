#include <iostream>
#include <cmath>
using namespace std;

int main(){
    long long  a , b ; 
    cin >> a >> b ; 
    int sum = (a%10) + (b %10) ; 
    if (a < 10 && b < 10 ) {cout << "0" ; }
    else {
    cout << sum ;
    } 
return 0 ; 
}
