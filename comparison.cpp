#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int x , y ; 
    char op ; 
    cin >> x  >>  op >> y ; 
    switch (op) {
        case '>': 
            if (x>y) {
                cout<< "Right" ;}
            else{cout<< "Wrong";}
            break ; 
        case '<': 
            if (x<y) {
                cout<< "Right" ;}
            else{cout<< "Wrong";}
            break ; 
        case '=': 
            if (x==y) {
                cout<< "Right" ;}
            else{cout<< "Wrong";}
            break; }
return 0 ; 
}
