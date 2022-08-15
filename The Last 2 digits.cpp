#include <iostream>
#include <cmath>
using namespace std;

int main(){
    long long  a,b,c,d; 
    cin >> a >> b >> c >> d ; 
    long long sum = (a%100)*(b%100)*(c%100)*(d%100) ; 
    int y = sum % 100 ; 
    if (y <10){cout << "0" << y ;}
    else {
    cout << y ; 
    }
    
return 0 ; 
}
