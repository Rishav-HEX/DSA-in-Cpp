// To print first n Fibonacci numbers using recursion
#include <iostream>
using namespace std;

void printfib(int a , int b , int n) {
    if (n > 0) {
        cout << a << " ";
        printfib(b, a + b, n - 1);
    }
}
int main(){
    int n = 7;
    printfib(0, 1, n);
    return 0;
}