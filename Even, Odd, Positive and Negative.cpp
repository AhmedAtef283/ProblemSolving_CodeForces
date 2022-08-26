#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;


int main(){
        ll n ; 
        cin >> n;
        ll arr[n] ;
        int even =0;
        int odd=0 ; 
        int pos =0 ; 
        int neg =0 ;
        for(int i=0; i<n ; i++){
                cin >> arr[i];
        }

        for(int i=0; i <n; i++){
                if(arr[i] >0 ){pos++; }
                if(arr[i]<0){neg++;}
                if(arr[i]%2== 0){even++;}
                if (arr[i]%2!= 0){odd++;}
        }
        cout << "Even: " << even << endl;
        cout << "Odd: " << odd << endl ; 
        cout << "Positive: " << pos << endl; 
        cout << "Negative: " << neg << endl;



}
