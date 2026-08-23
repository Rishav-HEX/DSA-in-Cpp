/* Q. Merge the Following intervals (for eg. [1,3]
[2,6]
[8,10]
[9,12]

Visualize:

[1--------3]
   [2-------------6]

                 [8----10]
                    [9---------12]

Yahan:

[1,3] + [2,6]

overlap kar rahe hain, toh merge:

[1,6]

Aur:

[8,10] + [9,12]

merge hoke: [8,12]

Final answer:

[1,6]
[8,12])
 Q. vector<vector<int>> intervals = {
        {1,3},
        {2,6},
        {8,10},
        {9,12}
    };*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> mergeIntervals(vector<vector<int>>& intervals)
{
    sort(intervals.begin(), intervals.end());

    vector<vector<int>> ans;

    ans.push_back(intervals[0]);

    for(int i = 1; i < intervals.size(); i++)
    {
        int currentStart = intervals[i][0];
        int currentEnd = intervals[i][1];

        int lastEnd = ans.back()[1];

        if(currentStart <= lastEnd)
        {
            ans.back()[1] = max(lastEnd, currentEnd);
        }
        else
        {
            ans.push_back(intervals[i]);
        }
    }

    return ans;
}

int main()
{
    vector<vector<int>> intervals = {
        {1,3},
        {2,6},
        {8,10},
        {9,12}
    };

    vector<vector<int>> ans = mergeIntervals(intervals);

    for(auto interval : ans)
    {
        cout << "[" << interval[0] << "," << interval[1] << "] ";
    }

    return 0;
}