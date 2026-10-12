//The Problem name is "Product Of Array Except self"

#include <iostream>
#include <vector>
using namespace std ;
int main(
 vector <int> nums = {1 ,2 ,3 ,4 } ;
 vector <int> ans ;
 for (int i = 0 ; i < nums.size() ; i++){
    int prod = 1 ;
    for(int j = 0 ; j < nums.size() ; j++){
        if(i != j){
            ans *= nums[j] ;
        }
    }
 }
 cout << ans ;
 return 0;
)