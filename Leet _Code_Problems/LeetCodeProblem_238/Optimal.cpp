//Solving the Problem Using Optimal Approach

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> nums = {1,2,3,4};
    int n = static_cast<int>(nums.size());
    vector<int> prefix(n, 1);
    vector<int> suffix(n, 1);
    vector<int> ans(n);

    //calculating prefix
    for(int i = 1 ; i < n ; i++){
        prefix[i] = prefix[i-1]*nums[i-1];
    }

    //calculating suffix
    for(int i = n-1 ; i > 0 ; i--){
        suffix[i-1] = suffix[i]*nums[i];
    }

    for(int i = 0 ; i<n ; i++){
        ans[i] = prefix[i] * suffix[i];
    }

    for(int i = 0 ; i < n ; i++){
        cout << ans[i] << " ";
    }

    return 0 ;
}
