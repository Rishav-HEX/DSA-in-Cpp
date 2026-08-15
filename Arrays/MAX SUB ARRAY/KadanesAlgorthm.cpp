//Here is the Implementation of Kadane's Algorithm which is the most Optimised Algorithm to Find Max Sum of a given Array,
//So Bacically What the Algorithm does is that it Resets the Negative Sum to 0 That makes easier for Finding the MAX sum of an Array
//For eg:- arr[] = {-1} then Durin Iteration the Current Sum of the Previous Elements are Negative and then If it Added to a positive Number IT will Never give a Max Sum of Elements Therefore
//If the CurrentSum is -ve then it is reset to 0, In the Given Example the Max sum is 0 and If We calculate through the Brute Fore Method then the Answer will be -1 that is one of the Test Case That it will not pass by Using Brute Fore Algo

#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5} ;
    int n = sizeof(arr)/sizeof(arr[0]);
    int curSum = 0 , maxSum = 0 ;
    for(int val : arr){
        curSum += val ;
        maxSum = max(curSum , maxSum);
        if(curSum < 0){
            curSum = 0;
        }
    }
    cout << maxSum << endl ;
    return 0;
}