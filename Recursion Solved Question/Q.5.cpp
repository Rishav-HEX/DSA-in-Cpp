// What will be the Output
#include <iostream>
using namespace std;

void fun(int n){
    if(n==0)
        return;
    
    cout << n << " ";

    fun(n-1);

    cout << n << " ";
}

int main(){
    fun(5);

return 0;
}

// Output 5 4 3 2 1 1 2 3 4 5

//This type of Recursion is Also Called as Linear Recursion
