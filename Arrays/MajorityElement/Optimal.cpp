#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int majorityElement(vector<int>& nums){
    int n = nums.size();
    //sort
    sort(nums.begin(), nums.end());

    //frequency Count
    int frq = 1 ; int ans = nums[0];

    for(int i =0 ; i < n ; i++){
        if(nums[i]== nums[i-1]){
            frq++;
        }
        else{
            frq = 1;
            ans = nums[i];
        }
        if (frq > n/2)
        {
            return ans;
        }
     
    }
       return ans;
}
int main(){
    vector<int> nums = {2,4,4,4,4,4,5,5,5};
    cout << majorityElement(nums);

return 0;
}