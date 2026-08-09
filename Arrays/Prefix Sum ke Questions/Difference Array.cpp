/* Given an array of size n initially filled with 0, perform multiple range update operations.

For each operation [l, r, value], add value to every element from index l to r.

Use a Difference Array to perform each range update efficiently and print the final array.

Initial Array:
[0, 0, 0, 0, 0, 0]

Operations:
[1, 4, +5]
[2, 3, +2]

Output:
[0, 5, 7, 7, 5, 0]



Short Explanation

A Difference Array allows us to perform range updates in O(1) instead of updating every element individually.

For a range [l, r] with value x:

diff[l] += x;
diff[r + 1] -= x;

After applying all range updates, take the Prefix Sum of the Difference Array to obtain the final array.

🔑 Pattern
Range Update
      ↓
diff[l] += x
diff[r+1] -= x
      ↓
Apply all updates
      ↓
Prefix Sum
      ↓
Final Array

⏱ Complexity
Each Update → O(1)
q Updates   → O(q)
Final Array → O(n)

Total → O(n + q)
Space → O(n)

*/

#include <iostream>
#include <vector>
using namespace std;

void rangeUpdate(vector<int>& diff, int l, int r, int value)
{
    diff[l] += value;

    if(r + 1 < diff.size())
    {
        diff[r + 1] -= value;
    }
}

int main()
{
    int n = 6;

    vector<int> diff(n, 0);

    // Range 1 to 4 : +5
    rangeUpdate(diff, 1, 4, 5);

    // Range 2 to 3 : +2
    rangeUpdate(diff, 2, 3, 2);

    // Convert Difference Array to Actual Array
    for(int i = 1; i < n; i++)
    {
        diff[i] += diff[i - 1];
    }

    // Print final array
    for(int x : diff)
    {
        cout << x << " ";
    }

    return 0;
}