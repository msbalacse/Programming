#include <iostream>
#include <vector>

using namespace std;

int findMax(const vector<int> &arr)
{
    if (arr.empty())
    {
        throw invalid_argument("Array is empty");
    }

    int maxElement = arr[0];
    for (const int &element : arr)
    {
        if (element > maxElement)
        {
            maxElement = element;
        }
    }
    return maxElement;
}

int main()
{
    vector<int> arr = {3, 5, 2, 9, 1, 6};
    try
    {
        int maxElement = findMax(arr);
        cout << "The maximum element in the array is: " << maxElement << endl;
    }
    catch (const invalid_argument &e)
    {
        cerr << e.what() << endl;
    }

    return 0;
}