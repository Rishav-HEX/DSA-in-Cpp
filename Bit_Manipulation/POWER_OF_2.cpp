// Figure Out how to find if a number is power of 2 using without any loop.

#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Check if n is a power of 2
    if (n > 0 && (n & (n - 1)) == 0) {
        cout << n << " is a power of 2." << endl;
    } else {
        cout << n << " is not a power of 2." << endl;
    }

    return 0;
}

// Figure Out how to find if a number is power of 2 using with loop.

#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Check if n is a power of 2 using a loop
    bool isPowerOfTwo = false;
    if (n > 0) {
        while (n > 1) {
            if (n % 2 != 0) {
                isPowerOfTwo = false;
                break;
            }
            n /= 2;
        }
        if (n == 1) {
            isPowerOfTwo = true;
        }
    }

    if (isPowerOfTwo) {
        cout << n << " is a power of 2." << endl;
    } else {
        cout << n << " is not a power of 2." << endl;
    }

    return 0;
}