// Q. Rotate the Array by 1 from the Right Side
#include <iostream>
using namespace std ;
int main(){
    int arr[5] = {10 , 20 , 30 , 40 ,50 };
    int temp = arr[4] ;
    for(int i = 4 ; i > 0 ; i--){
        arr[i] = arr[i-1] ;
    }
    arr[0] = temp ;
    for(int i = 0 ; i < 5 ; i++){
        cout << arr[i] << " " ;
    }
    return 0 ;
}