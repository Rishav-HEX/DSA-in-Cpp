/** What is Kadane's Algorithm?
 * Kadane's Algorithm is an efficient method to find the maximum sum of a contiguous subarray within a one-dimensional array of numbers. It operates in linear time O(n) and uses a dynamic programming approach to keep track of the maximum sum found so far and the current sum of the subarray being considered. The algorithm iterates through the array, updating the current sum and the maximum sum as it goes, ensuring that it captures the largest possible sum of any contiguous subarray.

// Code for Printing all the possible Subarrays of an Array

#include <iostream>
using namespace std;
int main(){
    int n =5 ;
    int arr[] = {1 ,2 ,3,4,5} ;

    for (int st = 0; st < n; st++){
        for (int end = st; end < n; end++){
                  cout << "[" ;
            for(int i = st; i <= end; i++)
            {
              cout << arr[i] << "";
            } cout << "]" << endl ;           
        }
    }
return 0;    
}
 */
/*
Maximum Subaaray Subarray Sum Using Brute Force Approach
*/
#include <iostream>
using namespace std;
int main(){
    int n = 7 ;
    int arr[] = {3 , -4 , 5 , 4 , -1 , 7 , -8};
    int maxSum = 0;
    for (int st = 0; st < n; st++){
        int currentSum = 0 ;
        for (int end = st; end < n; end++){
            currentSum += arr[end];
            maxSum = max(currentSum , maxSum) ;
        }
    
    }
cout << maxSum ;
    return 0;
}



//Implentation of Kadane's Algorithm to find the maximum sum of a contiguous subarray in an array of integers using Brute Force Approach
/*
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max_sum = arr[0];
    int current_sum = arr[0];

    for(int i = 1; i < n; i++)
    {
        current_sum = max(arr[i], current_sum + arr[i]);
        max_sum = max(max_sum, current_sum);
    }

    cout << "Maximum sum of contiguous subarray is: " << max_sum << endl;

    return 0;
}*/