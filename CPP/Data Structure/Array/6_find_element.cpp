#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int findElement(vector<int> &arr, int value)
{
    if (arr.empty())
    {
        throw invalid_argument("Array is empty");
    }

    sort(arr.begin(), arr.end());

    size_t n = arr.size();

    int start = 0;
    int mid = n / 2;
    int end = n;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == value)
        {
            return 1;
        }

        if (arr[mid] > value)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    // for (int i = 0; i < n / 2; i++)
    // {
    // }

    // for (int element : arr)
    // {
    //     if (element == value)
    //         return 1;
    // }
    return -1;
}

int main()
{
    vector<int> arr;

    arr.push_back(8);
    arr.push_back(1);
    arr.push_back(86);
    arr.push_back(6);
    arr.push_back(43);

    int chkElement;
    cin >> chkElement;

    try
    {
        int element = findElement(arr, chkElement);
        cout << element << endl;
    }
    catch (const invalid_argument &e)
    {
        cerr << e.what() << endl;
    }

    return 0;
}
