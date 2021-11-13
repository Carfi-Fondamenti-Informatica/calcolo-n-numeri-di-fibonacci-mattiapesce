#include <iostream>
using namespace std ;
int main() {
    int i=0 , succ=1 , prec=0 , ris=0 , n=0 ;
    cin >> n ;
    prec=i ;
    if(n>=2){
        cout << succ << endl ;
        for(int i=2; i<=n; i++ ){
            ris=(prec+succ) ;
            prec=succ ;
            succ=ris ;
            cout << ris << endl ;
        }
    }
    else {
        cout << "errore" << endl ;
    }
    return 0;
}
