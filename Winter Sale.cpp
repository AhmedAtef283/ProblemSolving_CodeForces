#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float dis , aft ; 
    cin >> dis >> aft ; 
    float bef = aft /( (100-dis) /100) ; 
    printf("%4.2f",bef) ;
    
    
return 0 ; 
}
