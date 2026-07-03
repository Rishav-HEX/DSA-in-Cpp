#include<iostream>
using namespace std;

void fun(int n){
    if (n==0){
        return;
        
    cout << "Before" << n << endl ;
    fun(n-1);
    cout << "After" << n << endl;
    }
}

int main(){
    int n = 3;
    fun(n);

    return 0;
}

/* Output
  Before 3
  Before 2
  Before 1
  After 1
  After 2
  After 3
*/
