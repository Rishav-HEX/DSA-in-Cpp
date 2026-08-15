//Print the Maximum Sub Array by using the 
#include <iostream>
using namespace std;
int main(){
    int arr[] = {-2,1,-3,4,-1,2,1,-5,4} ;
    int n = sizeof(arr)/sizeof(arr[0]) ;
    int maxSum = INT8_MIN;

    for(int st = 0 ; st < n ; st++){
            int currentSum = 0;
        for(int end = st ; end < n ; end ++){
            currentSum = currentSum + arr[end] ;
            maxSum = max(currentSum , maxSum);
        }
    }
    cout << maxSum << endl ;
    return 0;
}