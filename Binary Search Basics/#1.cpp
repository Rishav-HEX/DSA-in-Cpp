#include <iostream>
using namespace std;

int main()
{
    int target = 8;
    int arr[] = {2, 3, 4, 6, 8, 9};

    int n = sizeof(arr) / sizeof(arr[0]);

    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (target == arr[mid])
        {
            cout << "Target found at index " << mid << endl;
            return 0;
        }
        else if (target < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    cout << "Target not found";
    return 0;
}