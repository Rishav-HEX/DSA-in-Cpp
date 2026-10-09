//In this Optimal Solution of Container Have Most water is Solved using TWO POINTER APPRAOACH
#include <iostream>
#include <vector>
using namespace std ;
int main(){
    int MaxWater = 0 ;
        vector<int> height = {1,8,6,2,5,4,8,3,7} ;
        int n = height.size();
        int lp = 0 , rp = n-1 ;
        while (lp < rp){
            int w = rp - lp ;
            int h = min(height[lp] , height[rp]);
            int CurrentWater = w * h ;

            MaxWater = max(CurrentWater , MaxWater) ;

            height[lp] < height[rp] ? lp++ : rp-- ;
        }
        cout << "Max Water Container can Have the Area" << " "<< "'"<< MaxWater << "'";
}