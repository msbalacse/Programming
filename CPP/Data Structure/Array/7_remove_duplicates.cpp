#include <iostream>
#include <vector>
#include <set>
#include <map>

using namespace std;

void removeDuplicates(const vector<int> &arr)
{
    // Using a map to track seen elements
    map<int, bool> seen;
    for (int val : arr)
    {
        if (!seen[val])
        {
            seen[val] = true;
        }
    }

    // Print the unique keys from the map
    for (const pair<int, bool> &item : seen)
    {
        cout << item.first << " ";
    }

    // Time Complexity: O(n log n) for inserting n elements into the map
    // Space Complexity: O(n) for storing up to n unique elements in the map

    // below for the set-based approach
    /*
    set<int> result;

    for (int val : arr) {
        result.insert(val); // Insert into set, which handles duplicates
    }

    // Print the result from the set
    for (int i : result) {
        cout << i << " ";
    }

    // Time Complexity: O(n) for inserting n elements into the set (average case)
    // Space Complexity: O(n) for storing up to n unique elements in the set
    */

    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    removeDuplicates(arr);
    return 0;
}