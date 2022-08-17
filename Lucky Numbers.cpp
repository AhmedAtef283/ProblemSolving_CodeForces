#include <iostream>
#include <cmath>
using namespace std;


int main(){
        long long x ; 
        cin >> x ; 
        long long dig1 = x%10 ; 
        long long dig2 = x/10 ;        
        if(dig1%dig2 ==0 || dig2 %dig1 ==0){cout<<"YES";}
        else{cout<<"NO";}

return 0 ; 
}
