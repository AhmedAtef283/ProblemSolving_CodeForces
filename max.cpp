#include<bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
        ll n  ; 
        int max ;
        cin >> n ; 
        int arr[n] ;
        for(int i=0; i <n ; i++){
                cin >> arr[i] ; 
        }
        max = arr[0] ;
        for(int i=1; i<n ; i++){
                if(arr[i]>max){
                        max = arr[i] ;
                }

        }
        cout<< max << endl ;

}
