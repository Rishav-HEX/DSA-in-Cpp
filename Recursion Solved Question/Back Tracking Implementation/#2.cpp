#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int>& arr, vector<int>& ds, vector<bool>& visited)
{
    // Base Case
    if(ds.size() == arr.size())
    {
        cout << "{ ";

        for(auto x : ds)
            cout << x << " ";

        cout << "}" << endl;

        return;
    }

    // Try every element
    for(int i = 0; i < arr.size(); i++)
    {
        // Already used
        if(visited[i] == true)
            continue;

        // Choose
        ds.push_back(arr[i]);
        visited[i] = true;

        // Explore
        solve(arr, ds, visited);

        // Undo (Backtrack)
        ds.pop_back();
        visited[i] = false;
    }
}

int main()
{
    vector<int> arr = {1,2,3};

    vector<int> ds;

    vector<bool> visited(arr.size(), false);

    solve(arr, ds, visited);

    return 0;
}