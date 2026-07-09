// What will be the Output

#include<iostream>
using namespace std;
 void fun(int n){
    if (n==0)
    return;
        fun(n-1);
    cout << n << " ";
        fun(n-1);
 }

 int main(){
    fun(2);
 }

 /*Output
  1 2 1
 */

// This Recursion is also called as Tree Recursion because in this recursion function is calling itself more than one time.