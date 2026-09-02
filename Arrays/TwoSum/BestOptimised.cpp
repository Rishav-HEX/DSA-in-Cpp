#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> TwoSum(vector<int>& nums, int target) {
    unordered_map <int,int> map;
    vector <int> ans;
    for(int i = 0 ; i < nums.size(); i++){
        int first = nums[i];
        int sec = target - first ;

        if(map.find(sec) != map.end()){
            ans.push_back(i);
            ans.push_back(map[sec]);
            break;
        }
        map[first] = i;
    }
    return ans;
}
int main() {
    vector<int> nums = {2, 4, 7, 8, 3, 5};
    int target = 9;

    vector<int> result = TwoSum(nums, target);

    if (result.empty()) {
        cout << "No pair found" << endl;
    } else {
        cout << "Indices: ";
        for (int x : result) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}