//Problem : You are given an array which is called as mountain array i.e a collection of numbers in which a single higest number lies anywhere between start & end index of the array.
//So implement a Serching Algorithm in this Peak Mountain array whoose Time Complexity is of form log(n) {Hint : Use Binary Search}

#include <iostream>
#include <vector>
using namespace std ;
int main (){
    vector <int> nums = {0,3,8,9,5,2} ;
    int n = nums.size() ;
    int st = 1, end = n-2  , mid = st + (end - st)/2 ;

    while(st < end){
        if(nums[mid] > nums[mid-1] && nums[mid] < nums[mid +1] ){
            cout << "Element Found at index" << mid ;
        }
        else if(nums[mid -1] < nums[mid]){
            end = mid - 1 ;
        }
        else {
            st = mid + 1 ;
        }
    }

return 0;

}