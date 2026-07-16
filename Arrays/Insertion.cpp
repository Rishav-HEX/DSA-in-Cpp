//Q. Insert an Element at the pos Index without Removing any element of the Array
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {5, 2, 9, 1, 5};
    int size = 6;
    int pos = 3 ;
    int value = 8;

// Now To insert the Value At index 3
    for (int i = size; i >= pos; i--)
    {
        arr[i] = arr[i + 1] ;
    }
        arr[pos] = value;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ",";
    }
    
    return 0;
}