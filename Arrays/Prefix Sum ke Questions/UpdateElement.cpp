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