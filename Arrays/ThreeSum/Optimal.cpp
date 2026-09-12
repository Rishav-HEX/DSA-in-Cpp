#include <iostream>
#include <vector>
using namespace std;
 vector<vector<int>> ThreeSum(vector<int>& nums , int target) {
    set<int> uniqueTriplets;
    for(int i = 0 ; i < nums.size() ; i++){// a + b + c = target
        int tar = -nums[i]; // now here target is -a now we have to find b and c
        set<int> s;;
        
        for(int j = i+1 ; j < nums.size() ; j++ ){
            int c = tar - nums[j];
            if(s.find(tofind) != s.end()){
                vector<int> trip = {nums[i] , nums[j] , c};
                sort(trip.begin() , trip.end());
                uniqueTriplets.insert(trip);
            }
            s.insert(nums[j]);
        }
    }
 }