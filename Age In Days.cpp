#include <iostream>
#include <cmath>
using namespace std;
 
int main(){
    int day ; 
    cin >> day;
    int days , months , year ;      
    year = day / 365 ; 
    months = ( day - year *365 ) / 30 ;
    days = (day - year* 365) % 30 ;
    cout << year << " " << "years" << "\n";
    cout << months << " " << "months" << "\n";
    cout << days << " " << "days" << "\n";
 
 
 
 
return 0 ; 
}
