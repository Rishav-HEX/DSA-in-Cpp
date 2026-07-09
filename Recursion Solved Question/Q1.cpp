//What will bw the output or Print Number upto n using Recursion

#include <iostream>
using namespace std;
void fun(int n){
    if(n==0)
    return;

    fun(n-1);
    cout << n << " ";
}

int main(){
    fun(5);
}

/*Output
1 2 3 4 5 
*/

// This Type of Recursion is called as Head Recursion because the Recursive Function is Present at First and Further Operation is Present After That.