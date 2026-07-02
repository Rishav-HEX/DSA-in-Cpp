//To find Sum of first n Fibonacci numbers using recursion

#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += fibonacci(i);
    }
    cout << "Sum of first " << n << " Fibonacci numbers is: " << sum << endl;
    return 0;
}
