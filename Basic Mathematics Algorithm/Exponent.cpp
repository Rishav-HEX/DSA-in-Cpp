#include <iostream.h>
using namespace std;

int main(){
    long bf , x , ans = 1 ;      // to calculate x^n for eg: 3^5 here x = 3 & n = 5 & bf will be of n so bf = 1 0 1;

    if(n == 0) return 1.0 ;
    if(x == 0) return 0.0 ;
    if(x == 1) return 1.0 ;
    if(x == -1 && n%2 == 0 ) return 1.0;
    if(x == -1 && n%2 != 0) return -1.0;

     if (bf < 0){
        x = 1 / x ;
        bf = - bf ;
     }

    while (bf > 0) {
        if (bf % 2 == 1){
            ans = ans * x ;
        }
        x *= x ;
        bf /= 2;
    }

    cout << ans ;
}