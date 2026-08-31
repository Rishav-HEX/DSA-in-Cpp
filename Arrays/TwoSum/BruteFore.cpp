#include <iostream>
#include <vector>
using namespace std;
 vector <int> TwoSum(vector <int>& nums , int target){
    for(int i=0 ; i<nums.size(); i++){
        for(int j = i+1 ; j < nums.size() ; j++){
            if(nums[i] + nums[j] == target){
                cout << "Target Indexes are" << i "," j <<endl() ;
            }
        }
    }
    return 0;
 }