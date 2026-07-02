#include<iostream>
using namespace std;

void prime(int n){

    int i, flag = 0;
    for(i = 2; i <= n/2; ++i){
        if(n % i == 0){
            flag = 1;
            break;
        }
    }
    if (n == 1) {
        cout << "1 is neither prime nor composite.";
    }
    else {
        if (flag == 0)
            cout << n << " is a prime number.";
        else
            cout << n << " is not a prime number.";
    }}