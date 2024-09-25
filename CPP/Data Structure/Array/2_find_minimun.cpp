#include <iostream>
#include <vector>

using namespace std;

int findMinimun(const vector<int> &arr)
{
    int minValue = arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] < minValue)
        {
            minValue = arr[i];
        }
    }
    return minValue;
}

int main()
{
    vector<int> arr = {1, 2, 3, -4, 5};
    int minValue = findMinimun(arr);
    cout << "Minimum value in the array: " << minValue << endl;

    return 0;
}