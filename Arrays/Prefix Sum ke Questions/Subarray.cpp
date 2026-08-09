// Find if there exists a subarray whose sum = K
// Example: arr = {2,3,1,4,5} and K =8 then Expected Output: Yes, there exists a subarray whose sum = 8 (3,1,4)
// Hash map stores value and its index , Example: map[value] = index -> this way we assign the value and its index in the map. Now we check if (sum - K) exists in the map or not, if it exists then we can say that there exists a subarray whose sum = K.
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    vector<int> arr = {2,3,1,4,5};

    int k = 8;

    unordered_map<int,int> mp;

    mp[0] = -1; // This is done for the case when the 0th index is the starting index of the subarray whose sum = K. For example, if arr = {8, 1, 2} and K = 8 then we can say that the subarray starts from index 0 and ends at index 0. So we need to store the prefix sum of 0 at index -1.

    int prefix = 0;

    for(int i=0;i<arr.size();i++)
    {
        prefix += arr[i]; // Instead of calculating the full prefixsum array we can just fix the Prefix Sum at that Paricular index and check if (prefix - K) exists in the map or not.

        int need = prefix - k;

        if(mp.find(need) != mp.end())
        {
            cout << "Subarray Found" << endl;

            cout << "Start Index = " << mp[need] + 1 << endl;

            cout << "End Index = " << i << endl;

            return 0;
        }

        mp[prefix] = i;
    }

    cout << "No Subarray Found";
}