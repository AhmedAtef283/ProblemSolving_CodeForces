#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float x ; 
    cin >> x ; 
    float result = abs(int(x) - x) ; 
    if (result == 0){
        cout << "int " << int(x) ; 
    }
    else {
        cout << "float " <<  int(x) << " " << result ;    
    }
    
    
return 0 ; 
}
