#include <iostream>
#include<vector>
using namespace std;
int majorElement(vector<int>& nums){
    int n = nums.size();
    for(int val : nums){
        int freq = 0;
        for(int el : nums){
            if(el == val){
                freq++;
            }
        }
        if(freq > n/2){
            return val;
        }
        
    }
    return -1;
}
int main(){
    vector<int> nums = {1,1,2,3,3,4,3,3,3};
    cout << majorElement(nums);

    return 0;
}