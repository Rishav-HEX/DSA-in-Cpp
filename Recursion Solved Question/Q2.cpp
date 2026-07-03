//What will be Output or Print the number from 1 to n using recursion.

#include<iostream>
using namespace std;

void fun(int n){
    if (n==0)
    return;
    cout << n << " ";
    fun(n-1);
}
int main(){
    fun(5);
}

/*Output
5 4 3 2 1
*/