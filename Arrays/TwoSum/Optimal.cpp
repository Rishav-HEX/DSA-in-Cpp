#include <iostream.h>
#include <vector>
using namespace std;

vector <int> TwoSum(vector <int>& nums , int target){
    int i=0;
    int n = nums.size();
    int j = nums[n];
    while(i < j){
        if(nums[i] + nums[j] == target){
            cout<< i << j << endl();
        }
        else if(nums[i] + nums[j] < target)
        {
            i++;
        }
        else if (nums[i] + nums[j] > target)
        {
            j--;
        }
    }
    return 0;
}

int main(){
    //yur code here
}