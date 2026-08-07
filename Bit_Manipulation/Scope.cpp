// In this We'll see about Local and Global Variables in C++
 #include <iostream>
using namespace std;
int globalVar = 10; // Global variable

int main() {
    int localVar = 20; // Local variable :- This variable is only accessible only in this int main(){ //code } block .
    cout << "Global variable: " << globalVar << endl;
    cout << "Local variable: " << localVar << endl;
    return 0;
}

// Note :- The Local Variable is only accessible in the block where it is defined. The Global Variable is accessible throughout the program.
// for Example :- If we define a function in the program then the local variable will not be accessible in that function but the global variable will be accessible in that functionv even if it is defined in the main function.
// similarly if we declare a Local variable in if else block then it will not be accessible outside that block but the global variable will be accessible in that block and also outside that block.