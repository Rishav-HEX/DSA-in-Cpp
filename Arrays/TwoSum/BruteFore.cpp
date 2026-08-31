#include <iostream>
#include <vector>
using namespace std;

vector<int> TwoSum(vector<int>& nums, int target) {
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] + nums[j] == target) {
                cout << "Target Indexes are " << i << " and " << j << endl;
                return {i, j};
            }
        }
    }
    return {};
}

void printVector(const vector<int>& v) {
    cout << "[";
    for (size_t i = 0; i < v.size(); i++) {
        if (i > 0) cout << ", ";
        cout << v[i];
    }
    cout << "]";
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = TwoSum(nums, target);
    cout << "Result: ";
    printVector(result);
    cout << endl;

    return 0;
}