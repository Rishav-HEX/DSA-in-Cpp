//Search in rotated Sorted array
//given array [3,4,5,5,6,0,1,2] where target = 0

#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> nums = {3,4,5,5,6,0,1,2};
    int st = 0 ,tar , mid , end = nums.size() - 1 ;

    while (st <= end)
    {
        mid = st + (end - st)/2 ;
        if(nums[mid] == tar){
            return mid;
        }
    }
    if(nums[st] <= nums[mid]){//left sorted
        if(nums[st] <= tar && tar <= nums[mid]){
            end = mid -1 ;
        }
        else {
            st = mid + 1;
        }
    } else{ //right sorted
        if(nums[mid] >= tar && tar <= nums[end]){
            st = mid + 1;
        }
        else{
            end = mid -1 ;
        }
    }
    cout << st ;
    cout << end ;

return 0;
}