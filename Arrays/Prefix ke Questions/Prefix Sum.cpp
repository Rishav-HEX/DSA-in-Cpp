// Q. Find the Sum of the Elements from the input index I1 and I2 in the given array
#include <iostream>
using namespace std ;
int main(){
    int arr[5] = {10 , 20 , 30 , 40 ,50 };
    int I1 = 1 ; // Starting Index
    int I2 = 3 ; // Ending Index
    int sum = 0 ;
    for(int i = I1 ; i <= I2 ; i++){
        sum += arr[i] ;
    }
    cout << "Sum of the elements from index " << I1 << " to " << I2 << " is: " << sum ;
    return 0 ;
}

// Q. Find the Prefix Sum of the given array
#include <iostream>
using namespace std ;
int main(){
    int arr[5] = {10 , 20 , 30 , 40 ,50 };
    int prefixSum[5] ;
    prefixSum[0] = arr[0] ;
    for(int i = 1 ; i < 5 ; i++){
        prefixSum[i] = prefixSum[i-1] + arr[i] ;
    }
    cout << "Prefix Sum of the array is: " ;
    for(int i = 0 ; i < 5 ; i++){
        cout << prefixSum[i] << " " ;
    }
    return 0 ;
}