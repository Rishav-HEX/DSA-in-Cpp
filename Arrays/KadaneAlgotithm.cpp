//Implentation of Kadane's Algorithm to find the maximum sum of a contiguous subarray in an array of integers using Brute Force Approach
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
}