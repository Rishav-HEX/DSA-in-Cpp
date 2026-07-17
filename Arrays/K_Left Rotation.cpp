//Q. Rotate the array by k from the Left Side
#include <iostream>
using namespace std ;
int main(){
    int arr[5] = {10 , 20 , 30 , 40 ,50 };
    int k = 2 ; // Number of rotations
    for(int j = 0 ; j < k ; j++){
        int temp = arr[0] ;
        for(int i = 0 ; i < 4 ; i++){
            arr[i] = arr[i+1] ;
        }
        arr[4] = temp ;
    }
    for(int i = 0 ; i < 5 ; i++){
        cout << arr[i] << " " ;
    }
    return 0 ;
}