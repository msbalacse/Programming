#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void Sort(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
}

int binarySearch(const vector<int> &arr, int n, int k)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == k)
        {
            return mid;
        }

        if (arr[mid] > k)
        {
            end = mid - 1;
        }
        else
        {
            start = start + 1;
        }
    }

    return -1;
}

void printArr(vector<int> arr)
{
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Sort(arr, arr.size());
    int kIthIndex = binarySearch(arr, arr.size(), k);
    cout << kIthIndex << endl;
    return 0;
}