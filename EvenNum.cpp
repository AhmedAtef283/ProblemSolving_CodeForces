#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;


int main(){
        ll n ;
        cin >> n ; 
        int counter =0 ;
        for (int i =1 ; i<= n ; i++){
                if(i%2==0){
                        cout<< i << endl ;
                        counter++ ;
                }
                
        }
        if(counter==0){
                cout<< "-1" ;
        }



}
