// Pair Sum Problem using Brute Force algorithm
#include <iostream>
#include <vector>
using namespace std;
vector<int> pairSum(const vector<int>& nums, int target) {
    int n = nums.size();
    vector<int> ans ;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
 }
int main() {
          vector<int> nums = {1, 7, 5, 2, 3};
          int target = 9;
          vector<int> ans = pairSum(nums, target);
        cout << ans[0] << "," << ans[1] << endl;
       return 0;
    }