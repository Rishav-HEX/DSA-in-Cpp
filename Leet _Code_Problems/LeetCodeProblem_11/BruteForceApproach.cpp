//This is the Leet Code problem no: 11 Link("https://leetcode.com/problems/container-with-most-water/description/")
//This Question is Solved Using Brute Force Approach

#include <iostream>
#include <vector>
using namespace std ;

int main (){
    vector<int> nums = {1,8,6,2,5,4,8,3,7} ;
    int MaxWater = 0;
    int n = nums.size();
    for(int i = 0 ; i <= n ; i++){
        for(int j = i+1 ; j <= n ; j++){
            int height = min(nums[i] , nums[j]);
            int width = j - i ;
            int CurrentArea = height * width ;
            MaxWater = max(CurrentArea , MaxWater );

        }
    }
    cout << "Max Water Container can Have the Area" << " "<< "'"<< MaxWater << "'";

    return 0;
}
